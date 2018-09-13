// A Debugging Exercise by Marc Chee (marcc@aie.edu.au)
// 18/12/2016

// Marines are trying to "de-bug" an area (haha . . . haha)
// However something's up with this code . . . figure out what's going wrong
// When you're finished, there should be no compiler errors or warnings
// The encounter should also run and finish correctly as per the rules in the comments

// In many cases there are differences between what's in otherwise identical sections
// for Marines and Zerglings. It's good to be able to tell what the differences are
// and why they might be important.

// What's efficient and inefficient? Why?
// What uses more memory and what doesn't? Why?

// Last modified by Terry Nguyen (terryn@aie.edu.au)
// 10/09/2018

#include <iostream>
#include "Marine.h"
#include "Zergling.h"

using namespace std;

bool marineAlive(Marine * squadArr, size_t arrSize);
bool zerglingAlive(Zergling * swarmArr, size_t arrSize);
bool SingleMarineAlive(Marine * squadArr, int Unit);
bool SingleZerglingAlive(Zergling * swarmArr, int Unit);
int GetNumberOfAliveMarines(Marine * squadArr, size_t arrSize);
int GetNumberOfAliveZerglings(Zergling * swarmArr, size_t arrSize);
void GetChar();

int main()
{
	Marine squad[10];
	Zergling swarm[20];

	size_t squadSize = sizeof(squad) / sizeof(Marine);
	size_t swarmSize = sizeof(swarm) / sizeof(Zergling);

	cout << "A squad of marines approaches a swarm of Zerglings and opens fire! The Zerglings charge!" << endl;
	// Attack each other until only one team is left alive
	while (marineAlive(squad, squadSize) || zerglingAlive(swarm, swarmSize)) // If anyone is left alive to fight . . .
	{
		if (marineAlive(squad, squadSize)) // if there's at least one marine alive
		{
			
			for (size_t i = 0; i < squadSize; i++) // go through the squad
			{
				if (SingleMarineAlive(squad, i)) //Check if current marine is alive
				{
					// each marine will attack the first zergling in the swarm
					cout << "A marine fires for " << squad[i].attack() << " damage. " << endl;
					int damage = squad[i].attack();

					for (int i = 0; i < swarmSize; i++)
					{
						if (SingleZerglingAlive(swarm, i))
						{
							swarm[i].takeDamage(damage);
							if (!swarm[i].entity.isAlive()) // if the zergling dies, it is marked as such
							{
								cout << "The zergling target dies" << endl;
								cout << "There are " << GetNumberOfAliveZerglings(swarm, swarmSize) << " Zerglings left." << endl;
							}
							break;
						}
					}
					GetChar();
				}
			}
		}
		if (zerglingAlive(swarm, swarmSize)) // if there's at least one zergling alive
		{
			for (size_t i = 0; i < swarmSize; i++) // loop through zerglings
			{
				if (SingleZerglingAlive(swarm, i))
				{
					cout << "A zergling attacks for " << swarm[i].attack() << " damage." << endl;

					for (int j = 0; j < squadSize; j++)
					{
						squad[j].takeDamage(swarm[i].attack());
						if (!squad[j].entity.isAlive())
						{
							cout << "The marine succumbs to his wounds." << endl;
							cout << "There are " << GetNumberOfAliveMarines(squad, squadSize) << " marines left." << endl;
						}
						GetChar();
					}
				}
			}
		}
	}

	// Once one team is completely eliminated, the fight ends and one team wins
	cout << "The fight is over. ";
	if (marineAlive(squad, squadSize))
	{
		cout << "The Marines win." << endl;
		GetChar();
	} 
	else 
	{
		cout << "The Zerg win." << endl;
		GetChar();
	}
}


// Is there a Marine Alive?
bool marineAlive(Marine * squadArr, size_t arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (squadArr[i].entity.isAlive())
		{
			return true;
		}
	}
	return false;
}

// Is there a zergling Alive
bool zerglingAlive(Zergling * swarmArr, size_t arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (swarmArr[i].entity.isAlive())
		{
			return true;
		}
	}
	return false;
}

bool SingleZerglingAlive(Zergling * swarmArr, int Unit)
{

	if (swarmArr[Unit].entity.isAlive())
		return true;

	return false;
}
bool SingleMarineAlive(Marine * squadArr, int Unit)
{

	if (squadArr[Unit].entity.isAlive())
		return true;

	return false;
}

int GetNumberOfAliveMarines(Marine * squadArr, size_t arrSize)
{
	int numberAlive = 0;
	for (int i = 0; i < arrSize; i++)
	{
		if (squadArr[i].entity.isAlive())
		{
			numberAlive++;
		}
	}
	return numberAlive;

}
int GetNumberOfAliveZerglings(Zergling * swarmArr, size_t arrSize)
{
	int numberAlive = 0;
	for (int i = 0; i < arrSize; i++)
	{
		if (swarmArr[i].entity.isAlive())
		{
			numberAlive++;
		}
	}
	return numberAlive;

}

void GetChar()
{
	//char Input = ' ';
	//cin >> Input;
	system("PAUSE");
}
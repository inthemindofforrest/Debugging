#include "Zergling.h"



Zergling::Zergling()
{
}


Zergling::~Zergling()
{
}

int Zergling::attack()
{
	return 10;
}

void Zergling::takeDamage(int damage)
{
	entity.health -= damage;
	if (entity.health < 0)
		entity.health = 0;
}


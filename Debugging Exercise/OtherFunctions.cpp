/*#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <random>
#include <time.h>

using namespace std;


//What is the type of problem presented ? (Compile, semantic, or design ? )
//What is the problem and its symptoms ?
//How could you resolve the problem presented to enable the program to work as intended ?


//In this situation, the programmer is supposed to create a small program that prompts the user for two numbers and provides them with the sum of the two.
void main()
{
	std::cout << "Provide two numbers and you will be given the sum." << std::endl;

	int numA = -1;
	int numB = -1;
	std::cin >> numA;
	std::cin >> numB;

	std::cout << "The sum of the two numbers is" << (numA + numB) << "." << std::endl;
return 0;
}
//This is a Compile error, and a semantic error
//The program was missing a quotation mark when outputing the last message to the screen. This would assume that the output does not have a end, as there was no quotation mark at the end.
//And the other error is when the player puts in their input, it should not have both numA and NumB on the same line, but as for two imputs. Both of the numbers are the same otherwise.
//Add a quotation mark before the less than symbols in the last output message. Put cin >> numB; on a seperate line than numA.

//In this situation, the programmer is supposed to create a small program that acts as a four-function calculator. The program should ask the user for two numbers to perform an
//operation on as well as a character that represents the type of operation that should be performed (addition, subtraction, division, or multiplication).
void Main()
{
	std::cout << "-=xXx FOUR FUNCTION CALCULATOR PUNCH xXx=-" << std::endl;

	std::cout << "What are your two numbers?" << std::endl;

	double numA = -1.0;
	double numB = -1.0;
	double result = -1.0;

	std::cin >> numA;
	std::cin >> numB;

	std::cout << "What operation would you like to perform? (+, -, /, *)" << std::endl;

	char operation = ' ';
	std::cin >> operation;

	switch (operation)
	{
	case '+':
		result = numA + numB;
	case '-':
		result = numA - numB;
	case '/':
		result = numA / numB;
	case '*':
		result = numA * numB;
	default:
		std::cout << "Sorry, that isn't a recognized operation." << std::endl;
	}

	std::cout << "Your final result was" << result << std::endl;
}
//There are a couple Semantic errors (One of them is on multiple lines.) and one compile error.
//The compile error is on the last output to the screen. It is missing a quotation mark before the second set of less than signs.
//One Semantic error is that the operators need to correspond to the operators that the user chooses. and the other one is that numB needs to be on its own line.


//The following program is expected to print a random name to the terminal every time it runs.
int main()
{
	std::string names[10] =
	{
		"Terry Nguyen",
		"Johnny Collins",
		"Taerrance Tooker",
		"Kristen Uguudesu",
		"Nisha Williera",
		"Davin Jobbson",
		"Michael Pascal",
		"Jamison Cardigan",
		"Charles Hernia",
		"Reggie Grawcannon"
	};

	srand(time(NULL));
	size_t index = rand() % 10;

	std::cout << "Your random name is " << names[index] << std::endl;

	system("PAUSE");
	return 0;
}

//Semantic error, Design error
//Designer error: there should be a space after the end of this string "Your random name is" so that it is "Your random name is ". This will make the name and the sentence not combine to one word.
//Semantic error: there should be an srand(time(NULL)) using the #include <time.h> so that the number is completely random everytime the program is ran.
//Designer error: there should also be a pause of some sort at the end of the program so that the user can see what name is selected.


//The following program should put an array through a function that returns true if a value was found, otherwise it should return false. 
//The result is indicated to the user through output on the terminal.

bool containsValue(int value, int * arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == value)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	int nums[] = { 0, 5, 7, 1, 2, 3 };

	std::cout << "The value was " << (containsValue(7, nums, 6) ? "found" : "not found") << "!" << std::endl;

	system("PAUSE");
	return 0;
}

*/
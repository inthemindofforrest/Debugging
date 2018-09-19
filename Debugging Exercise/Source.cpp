/*
MAIN

Compile error

Line 36 and 38
Declare functions if they are below where they are going to be called from.

Line 36 zerglingAlive functions
Too few arguments in function

Line 42
variable not created

Line 36
Missing <<

Line 42
variable not created

Line 48
!swarm[0].entity.isAlive() needed to include entity into the Marine and Zergling
structs

Line 58, 59
i's must be swarm[i]

Line 59, 60
squad.begin() must be squad[i]




semantical error

Line 79
missing curly brace before the else

Line 86
loop through marines to see if they are alive
bool marineAlive() needs to be bool marineAlive(Marine * squadArr, size_t arrSize)

Line 92
loop through zerglings to see if they are alive

using namespace std
allows the program to access all std's

Line 67
Remove else and add all the contents to the if statement, make the if statement
the opposite of what it is

Line 57
Loop through all Zerglings to attack first ALIVE one in the array

Line 80
Loop through all Marines to attack first ALIVE one in the array






Design error

Line 42
check to see if that specific marine is alive

Line 64
check to see if that specific zergling is alive

Line 56
Display number of Zerglings are left

Line 79
Display number of Marines are left

Line 145
Gets the number of marines alive

Line 158
Gets the number of Zergling alive




ENTITY

return health in isAlive

int health needs to be public

remove:
virtual int attack();
virtual void takeDamage(int damage);


ZERGLING
MARINE

Entity entity;

All instances of health in Zergling and Maring need to be entity.health
*/
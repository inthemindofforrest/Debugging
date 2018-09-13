#include "Marine.h"



Marine::Marine()
{
	entity.health = 50;
}


Marine::~Marine()
{
}

int Marine::attack()
{
	return 10;
}

void Marine::takeDamage(int damage)
{
	entity.health -= damage;
}
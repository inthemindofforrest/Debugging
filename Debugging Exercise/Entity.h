#pragma once
class Entity
{
public:
	Entity();
	~Entity();

	bool isAlive();
	int health;

private:
	int maxHealth;
};


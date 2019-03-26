#pragma once

#include <string>
#include <iostream>

class Slave
{
private:
	std::string name;
	int health;

	void init(std::string name, int health);
public:
	static int all_slaves;

	void work();
	int getHealth();

	Slave();
	Slave(std::string name, int health);
	~Slave();
};


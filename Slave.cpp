#include "Slave.h"

#define DEFAULT_HEALTH 3


void Slave::init(std::string name, int health)
{
	this->name = name;
	this->health = health;
	all_slaves++;

#ifdef _DEBUG
	std::cout << "Slave created" << std::endl;
#endif // _DEBUG

}

void Slave::work()
{
	std::cout << "Slave is working for master" << std::endl;
	this->health--;
}

int Slave::getHealth()
{
	return this->health;
}

Slave::Slave()
{
#ifdef _DEBUG
	std::cout << "Runing default slave constructor" << std::endl;
#endif // _DEBUG
	init("noname", DEFAULT_HEALTH);
}

Slave::Slave(std::string name, int health)
{
#ifdef _DEBUG
	std::cout << "Runing slave constructor with parameters" << std::endl;
#endif // _DEBUG
	init(name, health);
}

Slave::~Slave()
{
#ifdef _DEBUG
	std::cout << "Runing slave destructor - Slave died" << std::endl;
#endif // _DEBUG
	all_slaves--;
}

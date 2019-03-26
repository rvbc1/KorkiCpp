#include "Master.h"
#include <iostream>


Master::Master()
{
#ifdef _DEBUG
	std::cout << "Runing default master constructor" << std::endl;
#endif
}


Master::~Master()
{
	if (dynamic_slave != nullptr) {
		delete dynamic_slave;
	}
#ifdef _DEBUG
	std::cout << "Runing master destructor - killing master" << std::endl;
#endif
}

void Master::addSlave(std::string name, int health)
{

#ifdef _DEBUG
	std::cout << "Creating dynamic slave" << std::endl;
#endif

	dynamic_slave = new Slave(name, health);
}

void Master::sendDynamicSalveToWork()
{
	if (dynamic_slave != nullptr) {

		dynamic_slave->work();
		if (dynamic_slave->getHealth() <= 0) {
			std::cout << "Slave dont have enoguht health. Killing slave" << std::endl;
			delete dynamic_slave;
			dynamic_slave = nullptr;
		}
	}
	else {
		std::cout << "Cannot work - dynamic slave does not exits" << std::endl;
	}

}

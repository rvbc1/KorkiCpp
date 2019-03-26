#pragma once

#include "Slave.h"

class Master
{
private:
	Slave automatic_slave;
	Slave * dynamic_slave = nullptr;
public:
	Master();
	~Master();

	void addSlave(std::string name, int health);
	void sendDynamicSalveToWork();
};


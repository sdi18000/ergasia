#pragma once
#include <iostream>
#include "Card.hpp"

class Holding:public BlackCard{
	protected:
		int isRevealed;
		int harvestValue;
		Holding* upperHolding;
		Holding* subHolding;
		holding holdingType;
	public:
		int getHarvestValue(void);
		Holding(std::string n,holding h);
		type getType();
		void connect(Holding* hold);
		void print();
		int isdead();
		void updateHarvest(void);
};
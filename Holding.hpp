#include <iostream>


class Holding:public BlackCard{
	protected:
		int isRevealed;
		int harvestValue;
		Holding* upperHolding;
		Holding* subHolding;
	public:
		Holding(std::string n,holding h);
};

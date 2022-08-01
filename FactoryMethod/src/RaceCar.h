#pragma once
#include "FactoryCar.h"
#include <iostream>
#include <string>
namespace texasCompany {


	class RaceCar : public FactoryCar
	{
	public:

		RaceCar() :_name("RaceCar") {};
		~RaceCar();
		float GetAceleration();
		float GetSpeed();
		float GetAerodinamy();
		int   GetBuilderYear();
		std::string name() { return _name; }
	private:
		std::string _name;
	};
}


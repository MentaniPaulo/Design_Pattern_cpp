#pragma once
#include "FactoryCar.h"
#include <iostream>
#include <string>
namespace texasCompany {
	

	class MuscleCar : public FactoryCar
	{
	public:
		MuscleCar() : _name("MuscleCar") {};
		~MuscleCar();
		float GetAceleration();
		float GetSpeed();
		float GetAerodinamy();
		int   GetBuilderYear();
		std::string name() { return _name; }
	private:
		std::string _name;
	};
}


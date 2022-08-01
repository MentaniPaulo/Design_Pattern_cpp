#pragma once
#include "FactoryCar.h"
#include <iostream>
#include <string>

namespace texasCompany {


	class CommunCar : public FactoryCar
	{
	public:
		CommunCar() :_name("CommunCar") {};
		~CommunCar();
		float GetAceleration();
		float GetSpeed();
		float GetAerodinamy();
		int   GetBuilderYear();
		std::string name() { return _name; }
	private:
		std::string _name;

	};
}


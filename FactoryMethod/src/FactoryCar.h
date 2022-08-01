#pragma once
#include <iostream>
#include <string>
namespace texasCompany {
	enum Type {
		_Commun, _MuscleCar, _Race
	};
	class FactoryCar
	{
	public:
		~FactoryCar();
		static FactoryCar* create(Type type);

		virtual float GetAceleration() = 0;
		virtual float GetSpeed() = 0;
		virtual float GetAerodinamy() = 0;
		virtual int   GetBuilderYear() = 0;
		virtual std::string name() = 0;
	};
}



#include "CommunCar.h"

namespace texasCompany {
	CommunCar::~CommunCar()
	{
		std::cout << _name << "Excluido" << std::endl;
	}
	float CommunCar::GetAceleration() {
		return 5;
	}
	float CommunCar::GetSpeed() {
		return 90;
	}
	float CommunCar::GetAerodinamy() {
		return 590;
	}
	int   CommunCar::GetBuilderYear() {
		return 2015;
	}


}
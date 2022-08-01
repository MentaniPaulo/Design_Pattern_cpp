#include "RaceCar.h"

namespace texasCompany {
	RaceCar::~RaceCar()
	{
		std::cout << _name << "Excluido" << std::endl;
	}
	float RaceCar::GetAceleration() {
		return 8;
	}
	float RaceCar::GetSpeed() {
		return 190;
	}
	float RaceCar::GetAerodinamy() {
		return 1500;
	}
	int   RaceCar::GetBuilderYear() {
		return 2018;
	}


}
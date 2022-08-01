#include "MuscleCar.h"

namespace texasCompany {
	MuscleCar::~MuscleCar()
	{
		std::cout << _name << "Excluido" << std::endl;
	}
	float MuscleCar::GetAceleration() {
		return 6;
	}
	float MuscleCar::GetSpeed() {
		return 140;
	}
	float MuscleCar::GetAerodinamy() {
		return 980;
	}
	int   MuscleCar::GetBuilderYear() {
		return 1970;
	}
}
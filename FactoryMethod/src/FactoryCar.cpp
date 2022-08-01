#include "FactoryCar.h"
#include "MuscleCar.h"
#include "RaceCar.h"
#include "CommunCar.h"
texasCompany::FactoryCar::~FactoryCar()
{
	std::cout << "Excluido" << std::endl;
}
texasCompany::FactoryCar* texasCompany::FactoryCar::create(Type type)
{

	switch (type) {
	case _MuscleCar:
		return new MuscleCar();
		break;
	case _Race:
		return new RaceCar();
		break;
	default:
		return new CommunCar();
		break;
	}
	return nullptr;
}

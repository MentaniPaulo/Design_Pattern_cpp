#include <iostream>
#include <string>
#include "FactoryCar.h"


void Log(texasCompany::FactoryCar* car) {
	std::cout << "Model: " << car->name() << ", Aceleration: " << car->GetAceleration() << ", Speed: " << car->GetSpeed()
		<< ", AeroDynamic: " << car->GetAerodinamy() << ", Year of prodution: " << car->GetBuilderYear() << std::endl;

}

int main() {
	texasCompany::FactoryCar* fiesta = texasCompany::FactoryCar::create(texasCompany::_Commun);
	texasCompany::FactoryCar* Mustang = texasCompany::FactoryCar::create(texasCompany::_MuscleCar);
	texasCompany::FactoryCar* NascarCar = texasCompany::FactoryCar::create(texasCompany::_Race);
	
	Log(fiesta);
	Log(Mustang);
	Log(NascarCar);

	delete fiesta;
	delete Mustang;
	delete NascarCar;
	return 0;
}
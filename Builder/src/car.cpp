#include "car.h"

void Car::setHp(const float &Hp)
{
    this->hp = Hp;
}
void Car::setWeight(const float &Weight)
{
    this->weight = Weight;
}
void Car::setColor(const std::string &Color)
{
    this->color = Color;
}
void Car::setSerialNumber(const std::string &SerialNumber)
{
    this->serialNumber = SerialNumber;
}
void Car::show(){
    std::cout << "Serial number: " << this->serialNumber << ", power: " << this->hp << ", weight: " << this->weight << ", Color: " << this->color << std::endl;
}
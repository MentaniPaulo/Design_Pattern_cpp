
#include "nissanBuilder.h"

nissanBuilder::nissanBuilder(){
    reset();
}
nissanBuilder::~nissanBuilder(){
    delete this->car;
}
Car* nissanBuilder::getCar(){
    return this->car;
}
void nissanBuilder::reset(){
    this->car = new Car;
}
void nissanBuilder::setHp(){
    car->setHp(620.00f);
}
void nissanBuilder::setWeight(){
    car->setWeight(1560.00f);
}
void nissanBuilder::setColor(){
    car->setColor("Blue");
}    
void nissanBuilder::setSerialNumber(){
    car->setSerialNumber("5896ASFG");
}
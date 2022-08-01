#include "director.h"


Director::Director(Builder *builder){
    this->builder = builder;
}
void Director::BuildstandardCar(){
    this->builder->setHp();
    this->builder->setWeight();
}
void Director::BuildFullCar(){
    this->builder->setColor();
    this->builder->setHp();
    this->builder->setSerialNumber();
    this->builder->setWeight();
}
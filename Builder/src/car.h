#pragma once
#include <iostream>
#include "builder.h"

class Car{
    private:
        float hp;
        float weight;
        std::string color;
        std::string serialNumber;
    public:
        Car() : hp(0), weight(0), color("black"), serialNumber("0000AAAA"){}
        void setHp(const float &Hp);
        void setWeight(const float &Weight);
        void setColor(const std::string& Color);
        void setSerialNumber(const std::string &SerialNumber);
        void show();
};
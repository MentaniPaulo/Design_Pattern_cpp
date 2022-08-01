#pragma once
#include <iostream>

class Builder{

public:
    virtual void setHp() = 0;
    virtual void setWeight() = 0;
    virtual void setColor() = 0;
    virtual void setSerialNumber() = 0; 
};
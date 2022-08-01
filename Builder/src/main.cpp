#include <iostream>
#include "director.h"

int main(){
    nissanBuilder* nissanLeafBuilder = new nissanBuilder();
    Director *director = new Director(nissanLeafBuilder);

    std::cout << "=== Complety===" << std::endl;
    director->BuildFullCar();
    Car* nissanLeaf = nissanLeafBuilder->getCar();
    nissanLeaf->show();


    delete nissanLeaf;
    delete director;
    return 0;
}
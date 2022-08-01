#include "builder.h"
#include "nissanBuilder.h"

class Director{
    Builder *builder;
    public:
        Director(Builder *builder);
        void BuildstandardCar();
        void BuildFullCar();
};
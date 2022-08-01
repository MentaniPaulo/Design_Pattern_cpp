#include "builder.h"
#include "car.h"
class nissanBuilder : public Builder{
    private:
        Car* car;

    public:
        nissanBuilder();
        ~nissanBuilder();
        Car *getCar();
        void reset();

        void setHp() override;
        void setWeight() override;
        void setColor() override;
        void setSerialNumber() override;
};
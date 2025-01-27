#ifndef STRATEGY_MALLARDDUCK_H
#define STRATEGY_MALLARDDUCK_H

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"


class MallardDuck : public Duck {
public:
    MallardDuck() : Duck() {
        setFlyBehavior(&flyWithWings_);
        setQuackBehavior(&quack_);
    }

    std::string display() const override { return "I'm a real Mallard duck!"; }

private:
    FlyWithWings flyWithWings_;
    Quack quack_;
};


#endif //STRATEGY_MALLARDDUCK_H

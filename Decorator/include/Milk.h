#ifndef DECORATOR_MILK_H
#define DECORATOR_MILK_H

#include "CondimentDecorator.h"

class Milk : public CondimentDecorator {
public:
    Milk(Beverage* beverage) : CondimentDecorator(beverage) {}

    size_t cost() const override { return 10 + CondimentDecorator::cost(); }

    std::string getDescription() const override { return CondimentDecorator::getDescription() + ", Milk"; }
};

#endif //DECORATOR_MILK_H

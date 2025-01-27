#ifndef DECORATOR_ESPRESSO_H
#define DECORATOR_ESPRESSO_H

#include "Beverage.h"

class Espresso : public Beverage {
public:
    Espresso() { ::Beverage::description = "Espresso"; }

    size_t cost() const override { return 199; }
};

#endif //DECORATOR_ESPRESSO_H

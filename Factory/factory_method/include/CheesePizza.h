#ifndef FACTORY_CHEESEPIZZA_H
#define FACTORY_CHEESEPIZZA_H

#include <string>

#include "Pizza.h"

class CheesePizza : public Pizza {
public:
    virtual ~CheesePizza() = default;

    std::string prepare() override { return "Prepare Cheese pizza"; }
    std::string bake() override { return "Bake Cheese pizza"; }
    std::string cut() override { return "Cut Cheese pizza"; }
    std::string box() override { return "Box Cheese pizza"; }
};

#endif //FACTORY_CHEESEPIZZA_H

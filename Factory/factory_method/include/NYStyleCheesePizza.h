#ifndef FACTORY_NEW_YORK_STYLE_CHEESEPIZZA_H
#define FACTORY_NEW_YORK_STYLE_CHEESEPIZZA_H

#include "Pizza.h"

class NYStyleCheesePizza final : public Pizza {
public:
    NYStyleCheesePizza();
    virtual ~NYStyleCheesePizza() = default;
};

#endif // FACTORY_NEW_YORK_STYLE_CHEESEPIZZA_H

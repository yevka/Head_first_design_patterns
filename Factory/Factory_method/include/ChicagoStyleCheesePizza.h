#ifndef FACTORY_CHICAGO_STYLE_CHEESEPIZZA_H
#define FACTORY_CHICAGO_STYLE_CHEESEPIZZA_H

#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza();
    virtual ~ChicagoStyleCheesePizza() = default;

    std::string cut() override;
};

#endif // FACTORY_CHICAGO_STYLE_CHEESEPIZZA_H

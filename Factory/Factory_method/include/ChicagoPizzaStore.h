#ifndef FACTORY_CHICAGO_PIZZASTORE_H
#define FACTORY_CHICAGO_PIZZASTORE_H

#include "PizzaStore.h"

class Pizza;

class ChicagoPizzaStore final : public  PizzaStore {
public:
    virtual ~ChicagoPizzaStore();
    Pizza *createPizza(const std::string &type) override;
};

#endif //FACTORY_CHICAGO_PIZZASTORE_H

#ifndef FACTORY_NEW_YORK_PIZZASTORE_H
#define FACTORY_NEW_YORK_PIZZASTORE_H

#include "PizzaStore.h"

class Pizza;

class NYPizzaStore : public PizzaStore {
public:
    virtual ~NYPizzaStore();
    Pizza *createPizza(const std::string &type) override;
};

#endif //FACTORY_NEW_YORK_PIZZASTORE_H

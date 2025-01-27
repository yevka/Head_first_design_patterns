#ifndef FACTORY_PIZZASTORE_H
#define FACTORY_PIZZASTORE_H

#include <string>

class Pizza;

class PizzaStore {
public:
    virtual ~PizzaStore();

    // this is factory method
    virtual Pizza* createPizza(const std::string& type) = 0;

    virtual Pizza* orderPizza(const std::string& type);
};

#endif //FACTORY_PIZZASTORE_H

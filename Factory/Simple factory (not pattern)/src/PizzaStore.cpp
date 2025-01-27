#include <iostream>

#include "IPizza.h"
#include "SimplePizzaFactory.h"
#include "PizzaStore.h"


PizzaStore::PizzaStore() : factory_(nullptr) {}

PizzaStore::PizzaStore(SimplePizzaFactory* factory) : factory_(factory) {}

IPizza* PizzaStore::orderPizza(const std::string& type) {
    IPizza* pizza = factory_->createPizza(type);
    if (pizza != nullptr) {
        std::cout << pizza->prepare() << std::endl;
        std::cout << pizza->bake() << std::endl;
        std::cout << pizza->cut() << std::endl;
        std::cout << pizza->box() << std::endl;
    }
    return pizza;
}

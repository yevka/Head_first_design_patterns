#include <iostream>

#include "Pizza.h"
#include "PizzaStore.h"

#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"

PizzaStore::~PizzaStore() {}

Pizza* PizzaStore::orderPizza(const std::string& type) {
    Pizza* pizza = this->createPizza(type);
    if (pizza != nullptr) {
        std::cout << "--- Making a " << pizza->getName() << " ---\n";
        std::cout << pizza->prepare() << "\n";
        std::cout << pizza->bake() << "\n";
        std::cout << pizza->cut() << "\n";
        std::cout << pizza->box() << "\n";
        std::cout << "--- The " << pizza->getName() << " maked ---\n";
    }
    return pizza;
}

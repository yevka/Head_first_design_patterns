#include "Pizza.h"
#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"

NYPizzaStore::~NYPizzaStore() {}

Pizza* NYPizzaStore::createPizza(const std::string& type) {
    if (type == "cheese") {
        return new NYStyleCheesePizza;
    }
    else if (type == "veggie") {
        return new NYStyleCheesePizza;
    }
    else if (type == "clam") {
        return new NYStyleCheesePizza;
    }
    else if (type == "pepperoni") {
        return new NYStyleCheesePizza;
    }

    return nullptr;

}

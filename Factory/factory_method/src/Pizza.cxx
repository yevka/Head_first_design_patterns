#include "Pizza.h"

Pizza::Pizza(const std::string& name
    , const std::string& dough
    , const std::string& sauce
    , const std::vector<std::string>& toppings) :

    name_(name)
    , dough_(dough)
    , sauce_(sauce)
    , toppings_(toppings)
{
}


std::string Pizza::prepare() {
    std::string preparing = "Preparing " + name_ + "\n";
    std::string tossingDough = "Tossing dough " + dough_ + "\n";
    std::string addingSauce = "Adding sauce " + sauce_ + "\n";

    std::string result = preparing + tossingDough + addingSauce;
    for (auto topping : toppings_) { result += "\n\t" + topping; }
    return result + "\n";
}

std::string Pizza::bake() {
    return "Bake for 25 minutes at 350";
}

std::string Pizza::cut() {
    return "Cutting the pizza into diagonal slices";
}

std::string Pizza::box() {
    return "Place pizza in official PizzaStore box";
}

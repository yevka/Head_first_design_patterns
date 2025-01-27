#include "ChicagoStyleCheesePizza.h"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() :
    Pizza("Chicago Style Deep Dish Cheese ",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        { "Shredded", "Mozzarella", "Cheese" })

{
}

std::string ChicagoStyleCheesePizza::cut() {
    return "Cutting the pizza into square slices";
}

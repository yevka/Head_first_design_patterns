#include <iostream>

#include "IPizza.h"
#include "SimplePizzaFactory.h"
#include "PizzaStore.h"

int main() {
    std::cout << "Simple Factory (not pattern - is idiome)" << "\n\n";

    try {
        SimplePizzaFactory factory;
        PizzaStore pizzaStore(&factory);

        IPizza* pCheesePizza = pizzaStore.orderPizza("cheese");
        IPizza* pClamPizza = pizzaStore.orderPizza("clam");
        IPizza* pPepperoniPizza = pizzaStore.orderPizza("pepperoni");
        IPizza* pVeggiePizza = pizzaStore.orderPizza("veggie");

        delete pCheesePizza;
        delete pClamPizza;
        delete pPepperoniPizza;
        delete pVeggiePizza;

        return EXIT_SUCCESS;

    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}



#include <iostream>

#include "Pizza.h"
#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"


int main() {  
  std::cout << "Factory method" << "\n\n";

  try {
    PizzaStore *nyPizzaStore = new NYPizzaStore;
    PizzaStore *chicagoStore = new ChicagoPizzaStore;

    Pizza *pizza = nyPizzaStore->orderPizza("cheese");
    std::cout << ">>> Ethan ordered a " + pizza->getName() + "\n";

    delete pizza;
    pizza = nullptr;

    std::cout << "\n";

    pizza = chicagoStore->orderPizza("cheese");
    std::cout << ">>> Joel ordered a " << pizza->getName() << "\n";

    delete pizza;


    return EXIT_SUCCESS;

  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
}



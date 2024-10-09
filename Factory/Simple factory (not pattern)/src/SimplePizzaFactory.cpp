//
// Created by Влад Евка on 18.12.16.
//

#include <stdexcept>

#include "IPizza.h"
#include "SimplePizzaFactory.h"

#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"

IPizza *SimplePizzaFactory::createPizza(const std::string &type) {
  if (type == "cheese") {
    return new CheesePizza;
  } else if (type == "veggie") {
    return new VeggiePizza;
  } else if (type == "clam") {
    return new ClamPizza;
  } else if (type == "pepperoni") {
    return new PepperoniPizza;
  }

  return nullptr;
}
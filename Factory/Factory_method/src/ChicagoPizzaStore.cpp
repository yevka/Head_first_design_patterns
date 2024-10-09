#include "Pizza.h"
#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"

ChicagoPizzaStore::~ChicagoPizzaStore() {}

Pizza* ChicagoPizzaStore::createPizza(const std::string &type) {
  if (type == "cheese") {
    return new ChicagoStyleCheesePizza;
  } else if (type == "veggie") {
    return new ChicagoStyleCheesePizza;
  } else if (type == "clam") {
    return new ChicagoStyleCheesePizza;
  } else if (type == "pepperoni") {
    return new ChicagoStyleCheesePizza;
  }

  return nullptr;

}

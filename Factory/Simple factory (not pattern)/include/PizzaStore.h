#ifndef FACTORY_PIZZASTORE_H
#define FACTORY_PIZZASTORE_H

#include <string>

class IPizza;
class SimplePizzaFactory;

class PizzaStore {
 public:
  PizzaStore();
  explicit PizzaStore(SimplePizzaFactory *factory);

  IPizza *orderPizza(const std::string &type);

 private:
  SimplePizzaFactory *factory_;
};

#endif //FACTORY_PIZZASTORE_H

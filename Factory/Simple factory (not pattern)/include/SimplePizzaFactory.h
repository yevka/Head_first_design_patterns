//
// Created by Влад Евка on 9/18/16.
//

#ifndef FACTORY_SIMPLEPIZZAFACTORY_H
#define FACTORY_SIMPLEPIZZAFACTORY_H

#include <string>

class IPizza;

class SimplePizzaFactory {
 public:
  IPizza *createPizza(const std::string &type);
};

#endif //FACTORY_SIMPLEPIZZAFACTORY_H

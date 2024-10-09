//
// Created by Влад Евка on 9/18/16.
//

#ifndef FACTORY_INTERFACE_PIZZA_H
#define FACTORY_INTERFACE_PIZZA_H

#include <string>

class IPizza {
 public:
  virtual ~IPizza() {}

  virtual std::string prepare() = 0;
  virtual std::string bake() = 0;
  virtual std::string cut() = 0;
  virtual std::string box() = 0;
};

#endif //FACTORY_INTERFACE_PIZZA_H

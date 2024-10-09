#ifndef FACTORY_PEPPERONIPIZZA_H
#define FACTORY_PEPPERONIPIZZA_H

#include <string>

#include "Pizza.h"

class PepperoniPizza : public Pizza {
 public:
  virtual ~PepperoniPizza() = default;

  std::string prepare() override { return "Prepare Pepperoni pizza"; }
  std::string bake() override { return "Bake Pepperoni pizza"; }
  std::string cut() override { return "Cut Pepperoni pizza"; }
  std::string box() override { return "Box Pepperoni pizza"; }
};

#endif //FACTORY_PEPPERONIPIZZA_H

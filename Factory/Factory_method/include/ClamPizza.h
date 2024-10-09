//
// Created by Влад Евка on 9/18/16.
//

#ifndef FACTORY_CLAMPIZZA_H
#define FACTORY_CLAMPIZZA_H

#include <string>

#include "Pizza.h"

class ClamPizza : public Pizza {
 public:
  virtual ~ClamPizza() = default;

  std::string prepare() override { return "Prepare Clam pizza"; }
  std::string bake() override { return "Bake Clam pizza"; }
  std::string cut() override { return "Cut Clam pizza"; }
  std::string box() override { return "Box Clam pizza"; }
};

#endif //FACTORY_CLAMPIZZA_H

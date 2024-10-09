//
// Created by Влад Евка on 9/18/16.
//

#ifndef FACTORY_VEGGIEPIZZA_H
#define FACTORY_VEGGIEPIZZA_H

#include <string>

#include "Pizza.h"

class VeggiePizza : public Pizza {
 public:
  virtual ~VeggiePizza() = default;

  std::string prepare() override { return "Prepare Veggie pizza"; }
  std::string bake() override { return "Bake Veggie pizza"; }
  std::string cut() override { return "Cut Veggie pizza"; }
  std::string box() override { return "Box Veggie pizza"; }
};

#endif //FACTORY_VEGGIEPIZZA_H

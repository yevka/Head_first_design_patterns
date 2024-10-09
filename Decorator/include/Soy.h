//
// Created by Влад Евка on 9/9/16.
//

#ifndef DECORATOR_SOY_H
#define DECORATOR_SOY_H

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator {
 public:
  Soy(Beverage *beverage) : CondimentDecorator(beverage) {}

  size_t cost() const override { return 15 + CondimentDecorator::cost(); }

  std::string getDescription() const override { return CondimentDecorator::getDescription() + ", Soy"; }
};

#endif //DECORATOR_SOY_H

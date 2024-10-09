//
// Created by Влад Евка on 9/9/16.
//

#ifndef DECORATOR_MOCHA_H
#define DECORATOR_MOCHA_H

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator {
 public:
  Mocha(Beverage *beverage) : CondimentDecorator(beverage) {}

  size_t cost() const override { return 20 + CondimentDecorator::cost(); }

  std::string getDescription() const override { return CondimentDecorator::getDescription() + ", Mocha"; }
};

#endif //DECORATOR_MOCHA_H

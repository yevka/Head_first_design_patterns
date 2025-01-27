#ifndef DECORATOR_WHIP_H
#define DECORATOR_WHIP_H

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator {
 public:
  Whip(Beverage *beverage) : CondimentDecorator(beverage) {}

  size_t cost() const override { return 10 + CondimentDecorator::cost(); }

  std::string getDescription() const override { return CondimentDecorator::getDescription() + ", Whip"; }
};

#endif //DECORATOR_WHIP_H

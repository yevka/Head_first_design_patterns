#ifndef DECORATOR_HOUSEBLEND_H
#define DECORATOR_HOUSEBLEND_H

#include "Beverage.h"

class HouseBlend : public Beverage {
 public:
  HouseBlend() { ::Beverage::description = "House Blend Coffee"; }

  size_t cost() const override { return 89; }
};

#endif //DECORATOR_HOUSEBLEND_H

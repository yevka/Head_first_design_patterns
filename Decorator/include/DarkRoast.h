#ifndef DECORATOR_DARKROAST_H
#define DECORATOR_DARKROAST_H

#include "Beverage.h"

class DarkRoast : public Beverage {
 public:
  DarkRoast() { ::Beverage::description = "Dark Roast"; }

  size_t cost() const override { return 99; }
};

#endif //DECORATOR_DARKROAST_H

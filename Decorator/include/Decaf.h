//
// Created by Влад Евка on 9/9/16.
//

#ifndef DECORATOR_DECAF_H
#define DECORATOR_DECAF_H

#include "Beverage.h"

class Decaf : public Beverage {
 public:
  Decaf() { ::Beverage::description = "Decaf"; }

  size_t cost() const override { return 105; }
};

#endif //DECORATOR_DECAF_H

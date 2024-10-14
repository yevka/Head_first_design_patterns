#ifndef STRATEGY_RUBBERDUCK_H
#define STRATEGY_RUBBERDUCK_H

#include <string>

#include "Duck.h"
#include "FlyNoWay.h"
#include "Squeak.h"


class RubberDuck : public Duck {
 public:
  RubberDuck() : Duck() {
    setFlyBehavior(&flyNoWay_);
    setQuackBehavior(&squeak_);
  }

  std::string display() const override { return "I'm a real Rubber duck!"; }

 private:
  FlyNoWay flyNoWay_;
  Squeak squeak_;
};


#endif //STRATEGY_RUBBERDUCK_H

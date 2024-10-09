#ifndef STRATEGY_REDHEADDUCK_H
#define STRATEGY_REDHEADDUCK_H

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"


class RedheadDuck : public Duck {
 public:
  RedheadDuck() : Duck() {
    setFlyBehavior(&flyWithWings_);
    setQuackBehavior(&quack_);
  }

  std::string display() const override { return "I'm a real Redhead duck!"; }

 private:
  FlyWithWings flyWithWings_;
  Quack quack_;
};


#endif //STRATEGY_REDHEADDUCK_H

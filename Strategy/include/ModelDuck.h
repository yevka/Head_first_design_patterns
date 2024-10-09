#ifndef STRATEGY_MODELDUCK_H
#define STRATEGY_MODELDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"


class ModelDuck : public Duck {
 public:
  ModelDuck() : Duck() {
    setFlyBehavior(&flyNoWay_);
    setQuackBehavior(&muteQuack_);
  }

  std::string display() const override { return "I'm a model duck!"; }

private:
    FlyNoWay flyNoWay_;
    MuteQuack muteQuack_;
};


#endif //STRATEGY_MODELDUCK_H

#ifndef STRATEGY_FLYROCKETPOWERED_H
#define STRATEGY_FLYROCKETPOWERED_H

#include <string>

#include "IFlyBehavior.h"


class FlyRocketPower : public IFlyBehavior {
 public:
  std::string fly() const override { return "I'm flying with a rocket!"; }
};


#endif //STRATEGY_FLYROCKETPOWERED_H

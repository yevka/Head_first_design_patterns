#ifndef STRATEGY_FLYNOWAY_H
#define STRATEGY_FLYNOWAY_H

#include <string>

#include "IFlyBehavior.h"


class FlyNoWay : public IFlyBehavior {
public:
    std::string fly() const override { return "I can't fly!"; }
};


#endif //STRATEGY_FLYNOWAY_H

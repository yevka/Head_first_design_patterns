#ifndef STRATEGY_FLYWITHWINGS_H
#define STRATEGY_FLYWITHWINGS_H

#include "IFlyBehavior.h"


class FlyWithWings : public IFlyBehavior {
public:
    std::string fly() const { return "I'm flying!"; }
};


#endif //STRATEGY_FLYWITHWINGS_H

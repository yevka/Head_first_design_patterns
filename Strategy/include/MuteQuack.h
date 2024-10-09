#ifndef STRATEGY_MUTEQUACK_H
#define STRATEGY_MUTEQUACK_H

#include <string>

#include "IQuackBehavior.h"


class MuteQuack : public IQuackBehavior {
 public:
  std::string quack() const override { return "Silence!"; }
};


#endif //STRATEGY_MUTEQUACK_H

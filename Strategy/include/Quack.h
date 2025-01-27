#ifndef STRATEGY_QUCK_H
#define STRATEGY_QUCK_H

#include <string>

#include "IQuackBehavior.h"


class Quack : public IQuackBehavior {
public:
    std::string quack() const override { return "Quack!"; }
};


#endif //STRATEGY_QUCK_H

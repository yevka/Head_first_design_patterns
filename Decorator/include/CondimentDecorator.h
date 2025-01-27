#ifndef DECORATOR_CONDIMENTDECORATOR_H
#define DECORATOR_CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator : public Beverage {
public:
    CondimentDecorator() = default;
    explicit CondimentDecorator(Beverage* beverage) : beverage_(beverage) {}
    virtual ~CondimentDecorator() { delete beverage_; }

    std::string getDescription() const override { return beverage_->getDescription(); }

    size_t cost() const override { return beverage_->cost(); }

private:
    Beverage* beverage_ = nullptr;
};

#endif //DECORATOR_CONDIMENTDECORATOR_H

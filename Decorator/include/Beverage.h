#ifndef DECORATOR_BEVERAGE_H
#define DECORATOR_BEVERAGE_H

#include <string>

class Beverage {
public:
    Beverage() = default;
    virtual ~Beverage() {}

    virtual std::string getDescription() const { return description; }

    virtual size_t cost() const = 0;

protected:
    std::string description = "Unknown Beverage";
};

#endif //DECORATOR_BEVERAGE_H

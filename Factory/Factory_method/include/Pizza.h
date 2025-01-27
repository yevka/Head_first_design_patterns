#ifndef FACTORY_INTERFACE_PIZZA_H
#define FACTORY_INTERFACE_PIZZA_H

#include <string>
#include <vector>

class Pizza {
public:
    Pizza() = default;
    Pizza(const std::string &name
          ,const std::string &dough
          ,const std::string &sauce
          ,const std::vector<std::string> &toppings);

    virtual ~Pizza() = default;

    virtual std::string prepare();
    virtual std::string bake();
    virtual std::string cut();
    virtual std::string box();

    std::string getName() const { return name_; }
    std::string getDough() const { return dough_; }
    std::string getSauce() const { return sauce_; }

private:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;
};

#endif //FACTORY_INTERFACE_PIZZA_H

#ifndef FACTORY_VEGGIEPIZZA_H
#define FACTORY_VEGGIEPIZZA_H

#include <string>

#include "IPizza.h"

class VeggiePizza : public IPizza {
public:
    virtual ~VeggiePizza() = default;

    std::string prepare() override { return "Prepare Veggie pizza"; }
    std::string bake() override { return "Bake Veggie pizza"; }
    std::string cut() override { return "Cut Veggie pizza"; }
    std::string box() override { return "Box Veggie pizza"; }
};

#endif //FACTORY_VEGGIEPIZZA_H

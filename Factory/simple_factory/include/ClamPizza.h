#ifndef FACTORY_CLAMPIZZA_H
#define FACTORY_CLAMPIZZA_H

#include <string>

#include "IPizza.h"

class ClamPizza : public IPizza {
public:
    virtual ~ClamPizza() = default;

    std::string prepare() override { return "Prepare Clam pizza"; }
    std::string bake() override { return "Bake Clam pizza"; }
    std::string cut() override { return "Cut Clam pizza"; }
    std::string box() override { return "Box Clam pizza"; }
};

#endif //FACTORY_CLAMPIZZA_H

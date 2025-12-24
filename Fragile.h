#ifndef FRAGILE_H
#define FRAGILE_H

#include "Package.h"

class Fragile : public Package {
public:
    Fragile(int t, float w, string d);
    float calculateCost() override;
};

#endif

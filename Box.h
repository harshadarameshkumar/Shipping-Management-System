#ifndef BOX_H
#define BOX_H

#include "Package.h"

class Box : public Package {
    float length, width, height;

public:
    Box(int t, float w, string d, float l, float wi, float h);
    float calculateCost() override;
};

#endif

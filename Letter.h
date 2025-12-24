#ifndef LETTER_H
#define LETTER_H

#include "Package.h"

class Letter : public Package {
public:
    Letter(int t, float w, string d);
    float calculateCost() override;
};

#endif

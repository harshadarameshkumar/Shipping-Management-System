#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package {
protected:
    int trackingNumber;
    float weight;
    string destination;

public:
    Package(int t, float w, string d);
    virtual float calculateCost();
    virtual void displayDetails();
    virtual ~Package() {}
};

#endif

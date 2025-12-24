#include <iostream>
#include "Letter.h"
#include "Box.h"
#include "Fragile.h"

using namespace std;

int main() {
    Letter l1(101, 0.5, "Chennai");
    Box b1(102, 5.0, "Coimbatore", 10, 8, 6);
    Fragile f1(103, 2.0, "Bangalore");

    cout << "Letter Cost: " << l1.calculateCost() << endl;
    cout << "Box Cost: " << b1.calculateCost() << endl;
    cout << "Fragile Cost: " << f1.calculateCost() << endl;

    return 0;
}

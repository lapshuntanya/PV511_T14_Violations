#include "Driver.h"

int main() {

    /*
    Violation a = {{1, 1, 2000},
        "Parking", 2000};
    Violation b;
    b.fillViolation();

    cout << "===========================\n\n";
    a.printTableViolation();
    b.printTableViolation();*/

    Driver a = {"Pupkin Vasyl", "AX1234TA",
        2, new Violation[2] {
        {{1, 1, 2026}, "Parking", 300},
        {{16, 3, 2026}, "Speed 200 km/h", 20'000}
    }};

    a.addViol();
    cout << "+++++++++++++++++++++++++++++++++++++\n\n";
    a.printDriver();
}

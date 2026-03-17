#pragma once
#include "DateMac.h"
#include <iomanip>

struct Violation {
    Date date_viol;//0 0 0
    char info[100] = "";
    float fine = 0;

    void fillViolation() {
        cout << "Input dd mm yyyy: ";
        //date_viol.fillDate();
        cin >> date_viol.day>> date_viol.month>> date_viol.year;
        cout << "Input info: ";
        cin.ignore();
        cin.getline(info, 100); //!!!!!!!
        cout << "Input fine: ";
        cin >> fine;
    }

    void printViolation() {
        cout << "\tINFO: " << info << endl;
        cout << "\tDATE: " << date_viol.toString() << endl;
        cout << "\tFINE: " << fine << "UAH" << endl;
    }

    void printTableViolation() {
        cout <<"|" << setw(12) << date_viol.toString("%d.%m.%Y")
        << "|" << setw(10) << fine
        <<"|" << setw(20) << info  << "|" << endl;
    }
};
#pragma once
#include "Violation.h"
#include "ArrayTemplate.h"


struct Driver {
    char name[100] = "";
    char carNumber[10] = "";
    int sizeViol = 0;
    Violation* arrViol = nullptr;

    void fillDriver() {
        cout << "Input name:";
        cin.getline(name, 100);
        cout << "Input number:";
        cin >> carNumber;
        sizeViol = 1;
        arrViol = new Violation[1];
        arrViol[0].fillViolation();
    }

    void printDriver() {
        cout << "Driver: " << name << endl;
        cout << "Car:    " << carNumber << endl;
        for (int i = 0; i < sizeViol; i++) {
            arrViol[i].printTableViolation();
        }
        cout << "=============================================\n\n";
    }

    void addViol() {
        Violation tmp;
        tmp.fillViolation();
        addItemBack(arrViol, sizeViol, tmp);
    }
};
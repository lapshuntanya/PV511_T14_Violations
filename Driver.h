#pragma once
#include "Violation.h"
#include "ArrayTemplate.h"


struct Driver {
    char name[100] = "";
    char carNumber[10] = "";
    int sizeViol = 0;
    Violation* arrViol = nullptr;


};
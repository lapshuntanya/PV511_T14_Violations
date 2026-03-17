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

    Driver b = {"Serdyuk Ihnat", "AA7634PA",
       1, new Violation[1] {
           {{1, 1, 2026}, "Parking", 300}
    }};

    //----------------------------------------------
    int menu = 0;
    int sizeDrivers = 0;
    Driver* arrDrivers = nullptr;

    addItemBack(arrDrivers, sizeDrivers, a);
    addItemBack(arrDrivers, sizeDrivers, b);
    //arrDrivers[0] "Pupkin Vasyl", arrDrivers[1] "Serdyuk Ihnat"


    do {
        cout << "==========================\n";
        cout << "\t MENU: \n";
        cout << "==========================\n";
        cout << "0 - Exit\n";
        cout << "1 - Show all drivers\n";
        cout << "2 - Add a new driver\n";
        cout << "3 - Find by number\n";
        cout << "4 - Add violation by number\n";
        cout << "==========================\n";
        cout << ">>> ";
        cin >> menu;

        switch (menu) {
            case 0: cout << "Have a good day!!!\n"; break;
            case 1: {
                for (int i = 0; i < sizeDrivers; i++) {
                    cout << arrDrivers[i].carNumber << " "
                    << arrDrivers[i].name << " "
                    << arrDrivers[i].sizeViol << endl;
                }
            }break;
            case 2: {
                Driver tmp;
                cin.ignore();
                tmp.fillDriver();//!!!!!!!!
                addItemBack(arrDrivers, sizeDrivers, tmp);
            }break;
            case 3: {
                char tmp[10] = "";
                cout << "Input number of the car: ";
                cin >> tmp;
                int index = -1;
                for (int i = 0 ; i < sizeDrivers; i++) {
                    if (strcmp(tmp, arrDrivers[i].carNumber) == 0) {
                        index = i;
                        break;
                    }
                }
                if (index == -1 ) cout << "Not found!\n";
                else arrDrivers[index].printDriver();
            }break;
            case 4: {
                char tmp[10] = "";
                cout << "Input number of the car: ";
                cin >> tmp;
                int index = -1;
                for (int i = 0 ; i < sizeDrivers; i++) {
                    if (strcmp(tmp, arrDrivers[i].carNumber) == 0) {
                        index = i;
                        break;
                    }
                }
                if (index == -1 ) {
                    cout << "Not found! Add a new driver\n";
                    Driver tmp;
                    tmp.fillDriver();
                    addItemBack(arrDrivers, sizeDrivers, tmp);
                }else {
                    Violation tmp;
                    tmp.fillViolation();
                    addItemBack(arrDrivers[index].arrViol,
                        arrDrivers[index].sizeViol,
                        tmp);
                }
            }break;
        }

    }while (menu!=0);

}

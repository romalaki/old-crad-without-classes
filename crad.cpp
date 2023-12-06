
#include <iostream>
#include "Header.h"
#include "Header.h"
#include <vector>
#include <string>
using namespace std;







int main()
{

    cout << "CRAD APP" << endl;
    vector<string>us;
    us.push_back("0");


    setlocale(LC_ALL, "rus");
    while (true) {
        options();
        cout << "Выберите опцию: ";
        int choice;
        cin >> choice;
        cout << endl;
        switch (choice) {

        case 1:
            us=addUs(us);
            break;
        case 2:
            us=renameUs(us);
            break;
        case 3:
            us=deleteUs(us);
            break;
        case 4:
           showUs(us);
            break;
        case 5:
            cout << "Пока!";
            return 0;
            break;
        default:
            cout << "Такого варината нет!";
            break;
        }

    }
}



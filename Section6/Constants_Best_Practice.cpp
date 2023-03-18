//
// Created by rsazi on 3/18/2023.
//
//
// Created by rsazi on 3/18/2023.
//
#include <iostream>
using namespace std;

int main() {

    const int charge_per_room {30};
    const double sales_tax {0.06};
    const int days {30};

    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "\nNumber of rooms:";
    int rooms {0};
    cin >> rooms;
    cout << "Price per room: $" << charge_per_room << endl;
    cout << "Cost: $" << charge_per_room * rooms << endl;
    cout << "Tax: $" << charge_per_room * rooms * sales_tax << endl;
    cout << "=============================================================" << endl;
    cout << "Total estimate: $" << (charge_per_room * rooms) +
    (charge_per_room * rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << days << " days.";

    return 0;
}
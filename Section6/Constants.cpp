//
// Created by rsazi on 3/18/2023.
//
#include <iostream>
using namespace std;

int main() {

    int rooms {0};
    const int charge_per_room {30};

    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "\nNumber of rooms:";
    cin >> rooms;
    cout << "Price per room: $" << charge_per_room << endl;
    cout << "Cost: $" << charge_per_room * rooms << endl;
    cout << "Tax: $" << charge_per_room * rooms * 0.06 << endl;
    cout << "=============================================================" << endl;
    cout << "Total estimate: $" << (charge_per_room * rooms) + (charge_per_room * rooms * 0.06) << endl;
    cout << "This estimate is valid for 30 days.";

    return 0;
}
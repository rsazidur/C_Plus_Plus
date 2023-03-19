//
// Created by rsazi on 3/18/2023.
//
//
// Created by rsazi on 3/18/2023.
//
#include <iostream>
using namespace std;

int main() {


    const int charge_per_large_room {35};
    const int charge_per_small_room {25};
    const double sales_tax {0.06};
    const int days {30};

    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "\nNumber of small rooms:";
    int small_rooms {0};
    cin >> small_rooms;
    cout << "Number of large rooms:";
    int large_rooms {0};
    cin >> large_rooms;
    cout << "Price per room: $" << charge_per_small_room << endl;
    cout << "Price per room: $" << charge_per_large_room << endl;
    cout << "Cost: $" << (charge_per_small_room * small_rooms) + (charge_per_large_room * large_rooms) << endl;
    cout << "Tax: $" << ((charge_per_small_room * small_rooms) + (charge_per_large_room * large_rooms)) * sales_tax << endl;
    cout << "=============================================================" << endl;
    cout << "Total estimate: $" << ((charge_per_small_room * small_rooms) + (charge_per_large_room * large_rooms))
    + ((charge_per_small_room * small_rooms) + (charge_per_large_room * large_rooms)) * sales_tax << endl;
    cout << "This estimate is valid for " << days << " days.";

    return 0;
}
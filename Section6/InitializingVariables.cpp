#include <iostream>
using namespace std;

int main() {

    cout << "Enter the room length:";
    int room_length {0};
    cin >> room_length;

    cout << "Enter the room width:";
    int room_width {0};
    cin >> room_width;

    cout << "The room is " << room_length * room_width << " square feet." << endl;
    return 0;
}

#include <iostream>

int main() {

    int favorite_number;
    std::cout << "Enter you favorite number between 1 to 100:";
    std::cin >> favorite_number;

    std::cout << "Amazing! That's also my favorite number." << std::endl;

    std::cout << "NO really," << favorite_number << " is my favorite number." << std::endl;

    return 0;
}

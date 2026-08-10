#include <iostream>

int main() {

    int seconds;
    std::cin >> seconds;

    const int hours = seconds / 3600;
    const int minutes = seconds % 3600 / 60;
    const int seconds_left = seconds % 60;

    std::cout << hours << "\n" << minutes << "\n" << seconds_left;
    return 0;
}
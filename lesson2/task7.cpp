#include <iostream>

int main() {

    int money;
    std::cin >> money;

    const int salary = money * 0.05 + 100;

    std::cout << salary << "\n";
}
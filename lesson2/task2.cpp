#include <iostream>

int main() {
    float a, b;

    std::cin >> a >> b;
    const float per = (a + b) * 2;
    const float square = a * b;

    std::cout << square << " " << per;
}
#include <cmath>
#include <iostream>

int main() {
    double a;

    std::cin >> a;

    const double pi = std::acos(-1);
    const double s = std::sin(3 * pi - 2 * a);
    const double c = std::cos(5 * pi + 2 * a);
    const double s_2 = std::sin(2.5 * pi - 8 * a);

    const double z = 2 * s * s * c * c;
    const double y = 0.25 - 0.25 * s_2;

    std::cout << z << "\n" << y;
}
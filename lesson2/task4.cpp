#include <iomanip>
#include <iostream>

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;

    const float sum_val = a + b + c;
    const float avg_val = sum_val / 3;
    const float square_val = a * b * c;

    std::cout << std::fixed << std::setprecision(3) << sum_val << "\n"
              << square_val << "\n"
              << avg_val;
}

/*
Программа должна вычислять скорость, с которой бегун пробежал дистанцию.
Пользователь вводит длину дистанции в метрах и, через пробел, время в формате
минуты:секунды.

Скорость выводится в км/час и должна быть округлена до двух знаков после
десятичной точки.
 */

#include <cstdio>
#include <iomanip>
#include <iostream>

int main() {

    int distance, minutes, seconds;
    scanf("%d %d:%d", &distance, &minutes, &seconds);

    double speed = static_cast<double>(distance) / (minutes * 60 + seconds) * 3.6;

    std::cout << std::fixed << std::setprecision(2) << speed << std::endl;
}

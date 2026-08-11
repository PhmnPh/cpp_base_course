#include <cstdio>
#include <string>

int main() {
    int a;
    scanf("%o", &a);

    // Создаем разделитель
    std::string kSep(32, '-');

    printf("%s\n", kSep.c_str());

    // 10 букв -> 20 байт (по 2 на каждую) -> еще 7 нужно -> 27 байт
    printf("| %-27s |%-10d|\n", "десятичная", a);

    // 12 букв -> 24 байта -> еще 5 байт -> 29
    printf("| %-29s |%-10o|\n", "восьмеричная", a);

    // 17 букв -> 34 байта
    printf("| %-34s |%-10x|\n", "шестнадчатеричная", a);
    printf("%s\n", kSep.c_str());
}

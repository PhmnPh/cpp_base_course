#include <cstdio>

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    const int rub = a + (b / 100);
    const int kop = b % 100;

    printf("%d р. %d к.", rub, kop);
}

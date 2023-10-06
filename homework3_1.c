//Найти наибольшее из 5 чисел
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(void) {

    int a, b, c, d, e;
    printf("press 5 numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    int maxim = a > b ? a : b;
    maxim = maxim > c ? maxim : c;
    maxim = maxim > d ? maxim : d;
    maxim = maxim > e ? maxim : e;

    printf("your number is: %d\n", maxim);

    return 0
}
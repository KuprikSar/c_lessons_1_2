// Разница тдвух чисел. Ввести 2 числа через пробел, получить их разницу
// Компилятор - gcc homework2_3.c -o homework2_3
// Запуск - ./homework2_3

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {

    int a, b;
    int dif;

    printf("Type 2 integer: ");
    scanf("%d%d", &a, &b);
    dif = a - b;
    printf("Difference result: %d\n", dif);

    return 0;
}
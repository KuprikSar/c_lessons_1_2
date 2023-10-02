// Ввести 3 числа через пробел, получить их сумму и произведение
// Компилятор - gcc homework2_2.c -o homework2_2
// Запуск - ./homework2_2 

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {

    int a, b, c;
    int sum;
    int mult;

    printf("Type 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > -1290 && a < 1290 && b > -1290 && b < 1290 && c > -1290 && c < 1290)
    {
        sum = a + b + c;
        printf("SUM result: %d\n", sum);
        mult = a * b * c;
        printf("Multiply result: %d\n", mult);
    }
    
    else
    printf("Vvedite chisla ot -1290 do 1290\n"); //иначе не умещается в int

    return 0;
}
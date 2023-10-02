// Ввести 4 значное число, получить среднее арифметическое цифр числа
// Компилятор - gcc homework2_4.c -o homework2_4
// Запуск - ./homework2_4 

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {

    int a;
    
    printf("Type 4 symbol number: ");
    scanf("%d", &a);
    if (a > 999 && a < 10000)
    {
        printf("Result arithmetic mean: %d\n", (a / 1000) * ((a % 1000) / 100) * ((a % 100) / 10) * (a % 10));
    }

    else
    printf("Vashe chislo ne cheturechznachnoe, restart program and try again\n"); 

    return 0;
}
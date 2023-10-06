//Найти наименьшее из 5 чисел
//For Compile gcc homework3_2.c -o homework3_2
//For start ./homework3_2

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(void) {

    int a, b, c, d, e;
    printf("press 5 numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    int min = a < b ? a : b;
    min = min < c ? min : c;
    min = min < d ? min : d;
    min = min < e ? min : e;

    printf("your number is: %d\n", min);

    return 0;
}
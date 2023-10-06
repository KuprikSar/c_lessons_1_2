//ввести 3 числа и определить находились ли они в порядке возрастания
//For Compile gcc homework3_3.c -o homework3_3
//For start ./homework3_3

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

/*
int main (void) {

    int a, b, c;
    printf("Press 3 numberst: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b && b < c)
    {
        printf("YES\n");
    }
        else
        printf("NO\n");

    return 0;
}
*/

int main (void) {


    int a, b, c;
    printf("Press 3 numberst: ");
    scanf("%d%d%d", &a, &b, &c);

    a < b && b < c ? printf("YES\n") : printf("NO\n");

    return 0;
}
//ввести номер месяца и вывести название времени года
//For Compile gcc homework3_4.c -o homework3_4
//For start ./homework3_4

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>


int main (void) {


    int a;
    printf("Press numbers of month: ");
    scanf("%d", &a);

    1 < a && a < 3 ? printf ("winter\n") : 4 < a && a < 6 ? printf("spring\n") : 7 < a && a < 9 ? printf("summer\n") : printf("outhmn\n");

    return 0;
}


/*
int main (void) {


    int a;
    printf("Press numbers of month: ");
    scanf("%d", &a);

    if (1 < a  && a < 3)
    {
        printf ("winter\n");
    }
    if (4 < a && a < 6)
    {
        printf("spring\n");
    }
    if (7 < a && a < 9)
    {
        printf("summer\n");
    }
    else
    printf("outhmn\n");

    return 0;
}
*/
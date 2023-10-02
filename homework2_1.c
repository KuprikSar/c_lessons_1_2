#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {

    int a, b, c;
    int sum;

    printf("Type 3 integer: ");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    printf("SUM result: %d\n", sum);

    return 0;
}

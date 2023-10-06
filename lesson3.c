#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(void) {

    /*
	printf("+---------------------------------------------------------------------+\n");
	printf("|            Type | Byte(s) |                  |                       |\n");
	printf("|                \\of memory/                Min|                    Max|\n");
	printf("|                 \\   /                        |                       |\n");
	printf("+------------------+--+------------------------+-----------------------+\n");
	printf("|%18s|%lu |%"PRId8"|%23d|\n", "int8_t", sizeof(int8_t), INT8_MIN, INT8_MAX);
	printf("|%18s|%lu |%24d|%23d|\n", "uint8_t", sizeof(uint8_t), 0, UINT8_MAX);
	printf("|%18s|%lu |%24d|%23d|\n", "int16_t", sizeof(int16_t), INT16_MIN, INT16_MAX);
	printf("|%18s|%lu |%24d|%23d|\n", "uint16_t", sizeof(uint16_t), 0, UINT16_MAX);
	printf("|%18s|%lu |%24d|%23d|\n", "int32_t", sizeof(int32_t), INT32_MIN, INT32_MAX);
	printf("|%18s|%lu |%24d|%23d|\n", "uint32_t", sizeof(uint32_t), 0, UINT32_MAX);
	printf("|%18s|%lu |%24lld|%23lld|\n", "int64_t", sizeof(int64_t), INT64_MIN, INT64_MAX);
	*/

    /*
    int a, b, c, d, e;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    int maxim = a > b ? a : b;
    maxim = maxim > c ? maxim : c;
    maxim = maxim > d ? maxim : d;
    maxim = maxim > e ? maxim : e;

    int min = a < b ? a : b;
    min = min < c ? min : c;
    min = min < d ? min : d;
    min = min < e ? min : e;


    printf("Maximum - %d\n", maxim);
    printf("Minimum - %d\n", min);
    printf("sum - %d\n", (min + maxim));
    */

    float a, b, c, d, e, f;
    float N;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    a = a - c;
    b = b - d;
    N = (a * a) / (e * e) + (b * b) / (f * f); 
    N < 1 ? printf ("Yes\n") : printf("No\n");
    printf("%f\n", N);

    return 0;
}
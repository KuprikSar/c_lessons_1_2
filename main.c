#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	/*
	printf("+---------------------------------------------------------------------+\n");
	printf("|            Type | Byte(s) |                  |                       |\n");
	printf("|                \\of memory/                Min|                    Max|\n");
	printf("|                 \\  /                         |                       |\n");
	printf("+------------------+--+------------------------+-----------------------+\n");
	printf("|%18s|%ld |%24d|%23d|\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("|%18s|%ld |%24d|%23d|\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);
	printf("|%18s|%ld |%24d|%23d|\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("|%18s|%ld |%24d|%23d|\n", "usigned short", sizeof(unsigned short), 0, USHRT_MAX);
	printf("|%18s|%ld |%24ld|%23ld|\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
	printf("|%18s|%ld |%24u|%23lu|\n", "unsigned long", sizeof(unsigned long), 0, ULONG_MAX);
	printf("|%18s|%ld |%24lld|%23lld|\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("|%18s|%ld |%24d|%23llu|\n", "unsigned long long", sizeof(unsigned long long), 0, ULLONG_MAX);
	printf("|%18s|%ld |%24e|%23e|\n", "float", sizeof(float), -FLT_MAX, FLT_MAX);
	printf("|%18s|%ld |%24.16E|%23.16E|\n", "double", sizeof(double), DBL_MIN, DBL_MAX);
	printf("|%18s|%ld| %23.15LE|%22.15LE|\n", "long double", sizeof(long double), LDBL_MIN, LDBL_MAX);
	*/

	/*
	int a1, n, d;
	int sum;
	printf("Enter numbers: \n");
	scanf("%d%d%d", &a1, &n, &d);
	sum = (2 * a1 + (n - 1) * d) * n / 2;
	printf("resultat: %d\n", sum);
	*/

	int a, b, c;
	float result;
	printf("Enter numbers: \n");
	scanf("%d%d%d", &a, &b, &c);
	result = (a + b + c) / 3;
	printf("resultat: %.2f\n", result);

	return 0;
}
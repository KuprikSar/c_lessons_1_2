
#include <stdio.h>
#include <locale.h>

float c;

int main(void) {
	setlocale (LC_ALL,"Rus");
	printf("Enter choice:\nStart\nStop\nExit\n");\
	printf("----------------------------------------------------------------------\n");
	printf("|   Type | Byte(s)  |                        |                       |\n");
	printf("|        | of memory|                     Min|                    Max|\n");
	printf("----------------------------------------------------------------------\n"); 
	printf("|  int8_t|         1|                    -128|                    127|\n"); 
	printf("| uint8_t|         1|                       0|                    255|\n");
	printf("| int16_t|         2|                  -32768|                  32767|\n");
	printf("|uint16_t|         2|                       0|                  65535|\n");
	printf("| int32_t|         4|              2147483648|             2147483647|\n");
	printf("|uint32_t|         4|                       0|             4294967295|\n");
	printf("| int64_t|         8|    -9223372036854775808|    9223372036854775807|\n");
	printf("|uint64_t|         8|                       0|   18446744073709551615|\n");
	printf("|   float|         4|          -3,4028235E+38|          3,4028235E+38|\n");
	printf("|  double|         8|-1,7976931348623157E+308|1,7976931348623157E+308|\n \n \n \n");	
	printf("Command for compile\ngcc main.c -o main\nCommand For Start:\n./main\n\n\n");
	printf("---------------------------------------------------------------------\n");
	const float a = 10.f;
	const int b = 0xFFU;
	c = a + b;
	printf("c = %f", c);
	float d, e, f;
	printf("Type number: \n");
	scanf("%f%f", &d, &e);
	f = d + e;
	printf("result - %f\n------------------------------\n",f);
	printf("%9.3f\n------------------------------\n",f);

	getchar();
		return 0;
}


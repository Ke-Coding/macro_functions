#include <stdio.h>
#define get_byte(num, a) do {                                               \
                               unsigned mask = 0x80000000;                 \
	                       int cnt, bytes = sizeof(num)*8;             \
	                       for (cnt=0; cnt<bytes ; cnt++)              \
	                       {                                           \
		                   a[cnt] = !!(mask>>cnt & num) +'0';      \
	                       }                                           \
	                            a[cnt] = 0;                            \
	                   } while (0)

int main()
{
	int number = 0x0000ABCD;
	char eachByte[123] = "";

	get_byte(number, eachByte);

	puts(eachByte);

	return 0;
}

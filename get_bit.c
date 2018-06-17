#include <stdio.h>
#define get_bit(num, a) do {                                           \
                            unsigned mask = 0x80000000;                \
	                    int cnt, bits = sizeof(num)*8;             \
	                    for (cnt=0; cnt<bits ; cnt++)              \
	                    {                                          \
		                a[cnt] = !!(mask>>cnt & num) +'0';     \
	                    }                                          \
	                    a[cnt] = 0;                                \
	                } while (0)

int main()
{
	int number = 0x0000ABCD;
	char eachBit[123] = "";

	get_bit(number, eachBit);

	puts(eachBit);

	return 0;
}

#include <stdio.h>
#define get_bit(num, a) do {                                                          \
	                    int cnt, bits = sizeof(num)*8;                            \
			    unsigned long long mask=(unsigned long long)1<<(bits-1);   \
	                    for (cnt=0; cnt<bits ; cnt++)                             \
	                    {                                                         \
		                a[cnt] = !!(mask>>cnt & num) +'0';                    \
	                    }                                                         \
	                    a[cnt] = 0;                                               \
	                } while (0)

int main()
{
	int number = 0x0000ABCD;
	char eachBit[123] = "";

	get_bit(number, eachBit);

	puts(eachBit);

	return 0;
}

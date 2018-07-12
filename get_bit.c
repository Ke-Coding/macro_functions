#include <stdio.h>
#define BITS_OF_BYTE 8
#define get_bit(num, a) do {                                                          \
	                    int cnt, bits = sizeof(num)*BITS_OF_BYTE;                 \
			    unsigned long long mask=(unsigned long long)1<<(bits-1);  \
			    int cnt = 0;                                              \
	                    for (; cnt<bits && !(mask&num); cnt++, mask>>=1)          \
			    int cnt0 = cnt;                                           \
	                    for (; cnt<bits; cnt++, mask>>=1)                         \
	                    {                                                         \
		                a[cnt-cnt0] = !!(mask>>cnt & num) +'0';               \
	                    }                                                         \
	                    a[cnt-cnt0] = 0;                                          \
	                } while (0)

int main()
{
	int number = 0x0000ABCD;
	char eachBit[123] = "";

	get_bit(number, eachBit);

	puts(eachBit);

	return 0;
}

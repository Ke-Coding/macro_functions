#include <stdio.h>
#define scan_integer(x)  {  register char tpc = getchar(), sgn = 1;\
                            for (x=0; tpc<'0' || tpc>'9'; tpc=getchar())\
                            	if (tpc=='-')\
                                	sgn = -1;\
                            for (; tpc>='0' && tpc<='9'; tpc = getchar())\
                            	x = (x<<1)+(x<<3)+tpc-'0';\
                            x *= sgn;\
                         }

int main()
{
    int num;                           // The type can also be unsigned, long long, etc.

    scan_integer(num)                  // This function can be faster than scanf.
    printf("num == %d\n", num);

    return 0;
}

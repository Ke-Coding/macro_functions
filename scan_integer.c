#include <stdio.h>
#define scan_integer(x) do{
                            register char tempc = getchar(), sgn = 1;          \
                            for (x=0; tempc<'0' || tempc>'9'; tempc=getchar())     \
                                if (tempc=='-')                                \
                                    sgn = -1;                                \
                            for (; tempc>='0' && tempc<='9'; tempc = getchar())    \
                                x = (x<<1)+(x<<3)+tempc-'0';                   \
                            x *= sgn;                                        \
                        }while(0)

int main()
{
    int num;                           // The type can also be unsigned, long long, etc.

    scan_integer(num)                  // This function can be faster than scanf.
    printf("num == %d\n", num);

    return 0;
}

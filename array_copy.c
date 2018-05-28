#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
#define array_copy(dest, src, n) {      \
            char*t = dest, *f = src;    \
            int m = (n+7)/8 ;           \
            switch (n%8) {              \
                case 0 :                \
                do { *t++ = *f++;       \
                case 7: *t++ = *f++;    \
                case 6: *t++ = *f++;    \
                case 5: *t++ = *f++;    \
                case 4: *t++ = *f++;    \
                case 3: *t++ = *f++;    \
                case 2: *t++ = *f++;    \
                case 1: *t++ = *f++;    \
                } while (--m>0);        \
			}                           \
        }

int main()
{
    int len;
    char src[MAX_LEN] = "";
    char dest[MAX_LEN] = "";

    fgets(src, MAX_LEN-1, stdin);
    len = strlen(src);

    array_copy(dest, src, len)

    puts(dest);
}

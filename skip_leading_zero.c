#include <stdio.h>
#define skip_leading_zero(num)  do {                     \
                                   scanf("%*[^1-9]");    \
                                   scanf("%d", &num);    \
                                } while(0)
int main()
{
    int num ;

    skip_leading_zero(num);

    printf("%d", num);
}

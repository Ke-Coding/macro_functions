#include <stdio.h>
#define MAX_LEN 200
#define skip_leading_zero() scanf("%*[^1-9]")
int main()
{
    char num[MAX_LEN] = "" ;

    skip_leading_zero();

    puts(num);
}

#include <stdio.h>

#define MAX(x,y) (x)>(y)?((x):(y))
#define __TOSTR(x) #x
#define TOSTR(x) __TOSTR(x)

int main()
{
    int x=1, y=2, z=3;
    char* p = TOSTR( MAX( MAX(x,y), z ) );
    
    puts(p);       // ((x)>(y)?((x):(y)))>(z)?(((x)>(y)?((x):(y))):(z))
    
    return 0;
}

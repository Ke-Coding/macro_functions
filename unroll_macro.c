#include <stdio.h>
#define MAX(x,y) (x)>(y)?((x):(y))
#define STR(x) #x
#define STR1(x) STR(x)

int main()
{
    int x=1, y=2, z=3;
    char* p = STR1( MAX( MAX(x,y), z ) );
    
    puts(p);       // ((x)>(y)?((x):(y)))>(z)?(((x)>(y)?((x):(y))):(z))
    
    return 0;
}

#include <stdio.h>
#include <string.h>

#define _F0N(i,n) for(i=0;i<n;++i)
#define _FLR(i,l,r) for(i=l;i<r;++i)
#define _gF(_1,_2,_3,_F, ...) _F
#define F(...) _gF(__VA_ARGS__,_FLR,_F0N, ...)(__VA_ARGS__)
#define _FD0(i,n) for(i=0;i<=n;++i)
#define _FDL(i,l,r) for(i=l;i<=r;++i)
#define _gFD(_1,_2,_3,_FD, ...) _FD
#define FD(...) _gFD(__VA_ARGS__,_FDL,_FD0, ...)(__VA_ARGS__)

int main()
{
    int i, n = 10, left = 3, right = 6;

    F(i, n)                 // for (i=0; i<n; ++i)
        printf("%d ", i);   // 0 1 2 3 4 5 6 7 8 9
    puts("");

    FD(i, n)                // for (i=0; i<=n; ++i)
        printf("%d ", i);   // 0 1 2 3 4 5 6 7 8 9 10
    puts("");

    F(i, left, right)       // for (i=left; i<right; ++i)
        printf("%d ", i);   // 3 4 5
    puts("");

    return 0;
}

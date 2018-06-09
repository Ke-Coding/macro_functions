#include <stdio.h>
#include <math.h>
#define MAX_N 10000
#define gener_prime_table(prime, n)     do{                                                 \
                                            prime[0] = prime[1] = 1;                        \
                                            int i, j, sq;                                   \
                                            for (i=2,sq=(int)(sqrt(n)+1); i<=sq; i++)       \
                                                if (!prime[i])                              \
                                                    for (j=i*i; j<=n; j+=i) prime[j]=1;     \
                                        }while(0)

int main()
{
    int primeArray[MAX_N] = {0}, upBound, i;
    scanf("%d",&upBound);

    if ( upBound > 1 && upBound < MAX_N )
    {
        gener_prime_table(primeArray, upBound);	    // Generate the prime number on a closed interval
//                                                     by using the sieve of Eratosthenes.
        for (i=0; i<=upBound; i++)
        {
            if (!primeArray[i])
                printf("%d ",i);
        }
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
#define M 500

#define generNext(str, len, next) do {                                     \
                                      int i = 0, j = -1;                   \
                                      next[0] = -1;                        \
                                      while (i<len)                        \
                                      {                                    \
                                          if(!~j||str[i]==str[j])          \
                                              next[++i]=++j;               \
                                          else j=next[j];                  \
                                      }                                    \
                                  } while(0)
int main()
{
	int len, i;
	int next[M];
	char str[M];
	
	scanf("%s",str);

	len = strlen(str);
	generNext(str, len, next);
	for(i=0; i<len; i++)
		printf("%d ",next[i]);

    return 0;
}

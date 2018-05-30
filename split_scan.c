#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
#define split_scanf(s,w,cnt)  do{                                                \
                                  scanf("%*[^a-zA-Z]");                          \
                                  cnt=0;                                         \
                                  while(scanf("%[^ ,.?!\n]%*[ ,.?!]",s)==1)      \
                                      strcpy(w[cnt++],s);                        \
                              }while(0)

int main()
{
    int i, numOfWords = 0;
    char sentence[MAX_LEN] = "";
    char words[MAX_LEN][MAX_LEN] = {""};		  // for storing the words of the sentence.


    split_scanf(sentence, words, numOfWords);

    for (i=0; i<numOfWords; i++)
    {
        puts(words[i]);
    }

    return 0;
}

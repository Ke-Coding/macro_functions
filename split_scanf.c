#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
#define split_scanf(s,w,n)   scanf("%*[^a-zA-Z]");\
                             n=0;\
                             while(scanf("%[^ ,.?!\n]%*[ ,.?!]",s)==1)\
                                 strcpy(w[n++],s)

int main()
{
    int i, numOfWords = 0;
    char sentence[MAX_LEN] = "";
    char words[MAX_LEN][MAX_LEN] = {""};		// store the words of the sentence.


    split_scanf(sentence, words, numOfWords);

    for (i=0; i<numOfWords; i++)
    {
        puts(words[i]);
    }

    return 0;
}

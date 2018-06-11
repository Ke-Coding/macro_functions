#include <stdio.h>
#include <string.h>
#define M 10000

#define swap(a,b) do { int temp=a;a=b;b=temp; } while(0)
#define merge(a, n_left, n_right)                             \
    do {                                                      \
        int tp[M]                                             \
        int j=0, k=n_left, n_sum=n_left+n_right, cnt=0;       \
        while(j<n_left&&k<n_sum)                              \
            cnt++[tp] = j[a]<k[a] ? j++[a]:k++[a];            \
        while(j<n_left) cnt++[tp]=j++[a];                     \
        while(k<n_sum)  cnt++[tp]=k++[a];                     \
        memcpy(a, tp, sizeof(int) * cnt);                     \
    } while(0)

void mergeSort( int*a, int n );

int main()
{
	int a[M]={0}, n, i;
    scanf("%d",&n);
  
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
	
    mergeSort(a, n);
	
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void mergeSort(int*a, int n)
{
    if(n<=1)
        return;
	if(n==2)
    {
        if(a[0]>a[1])
            swap(a[0], a[1]);
        return;
	}
    int mid = n/2;
    mergeSort(a, mid);
    mergeSort(a+mid, n-mid);
    merge(a, mid, n-mid);
}

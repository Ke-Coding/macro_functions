#include <stdio.h>

#define swap(a,b) do{int t=a;a=b;b=t;}while(0)
#define M 10000

#define adjustHeap(heap, node, size)                                                 \
	do {                                                                          \
		int parent=node, max_child, adjust = heap[parent];                    \
		for( ; parent*2+1<=size-1; parent=max_child)                          \
		{                                                                     \
			max_child = 2*parent+1;                                       \
			if (max_child<size-1 && heap[max_child]<heap[max_child+1])    \
				max_child ++;                                         \
			if (adjust>=heap[max_child])                                  \
				break;                                                \
			heap[parent] = heap[max_child];                               \
		}                                                                     \
		heap[parent] = adjust;                                                \
	} while(0)



int main()
{
        int h[M];
	int n, i, size, parent, max_child;
	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",h+i);

	for(i=n/2;i>=0;i--)
	{
		adjustHeap(h, i, n);
	}

	for(size=n-1;size>0;size--)
	{
		swap (h[0], h[size]);
		adjustHeap(h,0,size);
	}

	for(i=0;i<n;i++)
		printf("%d ",h[i]);

	return 0;
}

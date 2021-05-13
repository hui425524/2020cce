#include <stdio.h>
int a[100];
int main()
{
	int T,N;
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		scanf("%d",&N);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
	int ans=0;
	for(int k=0;k<N-1;k++){//比很多次，可省下最後一次

		for(int i=0;i<N-1;i++){//兩兩相比，最後的只好跟上個比
			if( a[i] >a[i+1]){

				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				ans++;

			}
		}
	}

		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}

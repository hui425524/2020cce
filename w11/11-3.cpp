#include<stdio.h>
#include <stdlib.h>
int compare( const void *p1, const void *p2)
{
    int c = *((int*)p1);
    int b = *((int*)p2);
    if(c>b) return 1;
    if(c==b) return 0;
    if(c<b) return -1;
}
int a[10]={4,1,7,2,5,3,6,9,8,10};

int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }

}

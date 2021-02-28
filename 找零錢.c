#include <stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d%d%d%d",&x,&a,&b,&c);

	a=x/50;
	b=(x%50)/5;
	c=(x%50)%5/1;

	printf("%d=50*%d+5*%d+1*%d\n",x,a,b,c);

}

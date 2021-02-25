# 2020實習題目

# 第一周

## 第1題:進階題：分式化簡 

題目:輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。 
數字範圍：整數1 – 10000  

```c
#include <stdio.h>
int p1(int a,int b)
{
	int c;
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	return b;
}

int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int d;
	d=p1(x,y);
	int j,k;
	j=x/d;
	k=y/d;
	printf("%d %d\n",j,k);

}

```
## 第2題:進階題：讀入整數反序列印
題目:
```c
#include <stdio.h>
int a[10];
int main()
{
	int n;
	for(int i=1;i<=10;i++)
	{
		if(n==0)
		break;
		else scanf("%d",&a[i]);
	}
	for(int i=10;i>=1;i--)
	{
		if(a[i]!=0)printf("%d ",a[i]);
	}
	printf("\n");
}
```
## 第3題:進階題：A的B次方函數
題目:
```c
#include <stdio.h>
int MYPOWER(int x,int y)
{	 
	int ans=1;
	if( x>=1 && x<=9 )
	{
		for(int i=1;i<=y;i++)
		{
		
			ans*=x;
		}

	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 第4題:進階題：漸增數列相加
題目:
```c
#include <stdio.h>
int main()
{
	int a,n=0;
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
		int j,z;
		j=i-1;
		z=j*i;
		n=n+z;
	}
	printf("%d\n",n);
}
```

## 第5題:基礎題：找零錢
題目:
```c
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
```

## 第6題:基礎題：因數個數
題目:
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0) b++;
	}
	printf("%d\n",b);
}

```

## 第7題:基礎題：找倍數 
題目:
```c
#include <stdio.h>
int main()
{
	int a,k=0;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a);
		if(a%3==0){
			k++;
		}
	}
	printf("%d\n",k);
}
```

## 第8題:基礎題：整數轉換為等級 
題目:
```c
#include <stdio.h>
int main()
{

	int a;
	scanf("%d",&a);
	if(a>=90)printf("A\n");
	else if(a>=80)printf("B\n");
	else if(a>=60)printf("C\n");
	else printf("F\n");
}
```

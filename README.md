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
題目:設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。 
數字範圍：整數 1 – 1000 
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
題目:請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
數字範圍：整數 1 – 9。
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
題目:輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 
數字範圍：整數1 – 1000 
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
題目:假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
數字範圍：整數1 – 1000
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
題目:輸入一個正整數，顯示所有該正整數因數的個數。 
數字範圍：整數1 – 10000。 
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
題目:連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。 
整數範圍：1 – 1000 
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
題目:輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；如果輸入的整數小於90但大於或等於80則輸出B，如果小於80但大於或等於60，則輸出C；如為其他整數，則輸出F。
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
# **week2筆記**

```c=
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

     int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2=400;
     printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    return 0;
}
```
```c=
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3=%d\n",n1,n2,n3);

     int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3=%d\n",n1,n2,n3);

    p2=p;
    *p2=400;
     printf("n1:%d n2:%d n3=%d\n",n1,n2,n3);

    return 0;
}

```
```c=
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3=%d\n",n1,n2,n3);

     int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3=%d\n",n1,n2,n3);

    return 0;

}
```
```c=
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3=%d\n",n1,n2,n3);

    return 0;
}
```
# week3筆記
## P
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main ()
{
    int *p= &a[2];
    *p = 222;

    p = p+2;
    *p = 666;
}

```

## P--
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
        for(int i=0; i<5; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
}
int main ()
{
    int *p= &a[2];
    *p = 222;
                printAll();

    p = p+2;
    *p = 666;
                printAll();

    p--;
    *p = 555;
                printAll();

}
```

## 指標宣告
```C
#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printAll()
{
        for(int i=0; i<10; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
}
int main ()
{
    int *p= &a[2];
    *p = 200;
    printAll();

    int *p2 = p+4;
    *p = 666;
    printAll();

    p2--;
    *p2 = 555;
    printAll();

    return 0;
}
```

## malloc
```C
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main (){
    int b[10];

    int *p = (int*) malloc( sizeof(int)*10 );
    return 0;

}
```
# w7上課內容
## 字串排序
```c
#include <stdio.h>
#include <string.h>
char a[100][10];
char temp[10];
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		
		if(strcmp(a[i],a[j]) > 0){
		strcpy(temp,a[i]);		
		strcpy(a[i],a[j]);
		strcpy(a[j],temp);
			}
		}
	}

	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}

}

```
##字串排序(qsort)
```
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char line[100][10];
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;
    
    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
//char temp[10];
int main()
{
    int n=4;
    //scanf("%d", &n);
    //for(int i=0; i<n; i++){
    //    scanf("%s", line[i]);
    //}
    
    qsort( line, n, sizeof(char[10]), compare);
    
    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}
```c

##第十周 實習題目
# 進階題：最大公因數gcd
```c
#include <stdio.h>
int main()
{
	printf("Enter two integers: \n");
	
	int a,b,t=0;
	scanf("%d%d",&a,&b);
	int x=a,y=b;
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	
	printf("The greatest common divisor of %d and %d is %d\n",x,y,a);

}

```

#include <stdio.h>
char a[10000];///�O�o����
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){

		gets(a);//gets(Ū���;scanf(�@��Ū�@��

		//printf("%s\n",a);

		for(int k=0;a[k]!=0;k++){

			char c=a[k];

			if(c>'A' && c<'Z')printf("�j");
			else if(c>'a' && c<'z')printf("�p");
			else printf("�L");
		}

	}



}

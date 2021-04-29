#include <stdio.h>
char a[10000];
int ans[26];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){

		gets(a);//gets(讀整行;scanf(一次讀一個

		//printf("%s\n",a);
	}
		for(int k=0;a[k]!=0;k++){

			char c=a[k];

			if( c >= 'A' && c <= 'Z') ans[ c-'A']++;
			else if( c>='a' && c<='z') ans[ c-'a']++;

		}

		for(int i=0;i<26;i++){

			printf("%c %d\n",'A'+i,ans[i]);

		}
	}

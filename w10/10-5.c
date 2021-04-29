#include <stdio.h>
#include <stdlib.h>
char a[10000];
typedef struct{

	int ans;//int ans[26];
	char c;//char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}BOX;
BOX array[26];
int compare( const void *p1, const void *p2){

	if( ((BOX*)p1)->ans > ((BOX*)p2)->ans)return -1;
	else if( ((BOX*)p1)->ans < ((BOX*)p2)->ans )return +1;
	else return 0;
}
int main()
{
	for(int i=0;i<26;i++)array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(a);
		for(int k=0;a[k]!=0;k++){
			char c=a[k];
			if( c >= 'A' && c <= 'Z') array[ c-'A'].ans++;
			else if( c>='a' && c<='z') array[ c-'a'].ans++;

		}//gets(讀整行;scanf(一次讀一個
	}
	qsort(array,26,sizeof(BOX),compare);

	/*	for(int i=0;i<26;i++){

			for(int j=i+1;j<26;j++){
				if( ans[i] < ans[j] || (ans[i]==ans[j] && alphabet[i]>alphabet[j]) ){
					int temp=ans[i];
					ans[i] = ans[j];
					ans[j] = temp;
					char c = alphabet[i];
					alphabet[i] = alphabet[j];
					alphabet[j] = c;



				}

		}
	}*/
	for(int i=0;i<26;i++){

		if(array[i].ans>0)printf("%c %d\n",array[i].c,array[i].ans);
		}


}

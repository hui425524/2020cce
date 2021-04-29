#include <stdio.h>
char a[10000];
int ans[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){

		gets(a);
		for(int k=0;a[k]!=0;k++){
			char c=a[k];
			if( c >= 'A' && c <= 'Z') ans[ c-'A']++;
			else if( c>='a' && c<='z') ans[ c-'a']++;

		}//gets(讀整行;scanf(一次讀一個
	}

		for(int i=0;i<26;i++){

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
	}
	for(int i=0;i<26;i++){

		if(ans[i]>0)printf("%c %d\n",alphabet[i],ans[i]);
		}


}

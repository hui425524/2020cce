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

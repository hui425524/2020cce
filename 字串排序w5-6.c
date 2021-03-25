#include <stdio.h>
#include <string.h>
char line[1000][10];
int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%s",line[i]);
    }


    char temp[10];
    for(int i=0;i<N;i++){
        for(int k=i+1;k<N;k++){
            if(strcmp( line[i],line[k])>0){
               strcpy(temp,line[i]);
               strcpy(line[i],line[k]);
               strcpy(line[k],temp);
            }

        }
    }

    for(int i=0;i<N;i++){
        printf("%s\n",line[i]);
    }

}

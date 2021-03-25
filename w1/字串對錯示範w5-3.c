#include <stdio.h>
int main()
{
    char line[10]="happy";
    char line2[10]={'s','a','d','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="hellow";
    char line4[]={'h','e','l','l','o'};
    printf("%s\n",line3);
    printf("ooooo",line4);
}

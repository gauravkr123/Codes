#include<stdio.h>
int main()
{
    char c='9';

    while(c!='\n')
    {
        scanf("%c",&c);
        printf("%c",c);
    }
    printf("%c",c);
    return 0;
}

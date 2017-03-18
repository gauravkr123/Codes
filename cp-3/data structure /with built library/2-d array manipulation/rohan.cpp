#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n<5 ||n>10)
    {
        printf("give number again ");
        scanf("%d",&n);
    }
    return 0;
}

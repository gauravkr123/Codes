#include<stdio.h>
int main()
{
    int n;
    int p=0,r=0;
    printf("Give a integer :");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n<0)
        r++;
       if(n>0)
        p++;
        printf("\nGive another number : ");
        scanf("%d",&n);

    }
    printf("\nthe number of positive numbers is %d \nThe number of negative numbers is %d",p,r);
    return 0;
}

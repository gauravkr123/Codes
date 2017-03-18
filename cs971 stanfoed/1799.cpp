#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double r,n;
        cin>>r>>n;
        double s= sin(3.141592653/n);
        double x=r*s/(1+s);
        cout<<"Scenario #"<<i<<":\n";
        printf("%.3f\n\n",x);
    }
return 0;
}

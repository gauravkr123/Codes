#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[4]={};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[x-1]++;
    }
    int y;
    if(a[0]<=a[2])
    {
        y=a[3]+a[2]+(a[1]+1)/2;
    }
    else
    {
        if(a[1]%2==0)
        y=a[3]+a[2] + (a[1])/2 +(a[0]-a[2]+3)/4;
        else
        y=a[3]+a[2] + (a[1])/2 +(a[0]-a[2]+2)/4;
    }
    cout<<y<<"\n";
    return 0;
}

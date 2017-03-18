#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++)
    cin>>a[i];
    sort(a,a+12);

    int i=11;
    while(k>0)
    {
        k-=a[i];
        i--;
        if(i==-2)
        {cout<<"-1\n";
        return 0;}
    }
    cout<<11-i<<"\n";
}

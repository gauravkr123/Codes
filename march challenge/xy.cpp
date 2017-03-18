#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t ;
    while(t--)
    {
        int x;
        cin>>x;
        int a[x],b[x];
        long a_e=0,a_o=0,b_e=0,b_o=0;
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
            if((i+1)%2==1)
            a_o+=a[i];
            else
            a_e+=a[i];
        }
        for(int i=0;i<x;i++)
        {
            cin>>b[i];
            if((i+1)%2==1)
            b_o+=b[i];
            else
            b_e+=b[i];
        }
        long m=min(a_o+b_e,a_e+b_o) ;
        cout<<m<<"\n";
    }
    return 0;
}

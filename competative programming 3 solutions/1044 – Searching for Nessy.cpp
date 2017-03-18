#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,m;
        cin>>n>>m;
        long a,b;
        if((n-1)%3==0)
        {
            a=(n-1)/3;
        }
        else
        a=(n-1)/3 +1;

        if((m-1)%3==0)
        {
            b=(m-1)/3;
        }
        else
        b=(m-1)/3 +1;
        long c=a*b;
        cout<<c<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int gcd;
    int turn=1;
    while(gcd<=n)
    {
        if(turn%2==1)
        {
            int x= _gcd(n,a);
            n=n-x;
            if(n<0)
            {cout<<1<<endl;
             break;
            }
        }
        if(turn%2==0)
        {
            int x= _gcd(n,b);
            n=n-x;
            if(n<0)
            {
               cout<<0<<endl;
               break;
            }

        }
    }

}

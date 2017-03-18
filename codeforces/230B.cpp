#include<bits/stdc++.h>
using namespace std;
int isPrime(long n)
{ if(n==1)
return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        long long int a;
        cin>>a;
        double b=sqrt(a);
        if(b==floor(b) && isPrime(b))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}

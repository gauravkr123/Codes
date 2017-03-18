#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=sqrt(n);i>=1;--i)
    {
        if(n%i==0)
        {
            b=i;
            a=n/b;
            break;
        }
    }
    cout<<b<<" "<<a<<endl;
}

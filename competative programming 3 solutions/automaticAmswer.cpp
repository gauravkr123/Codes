#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        long t;
        cin>>t;
        long y =fabs( (t*63+7492)*5-498);
        cout<<(y/10)%10<<endl;
    }
}

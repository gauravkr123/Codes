#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==b)
    return a;
    if(a<b)
    {
        int temp =a;
        a=b;
        b=temp;
    }
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int turn =1;
    while(c!=0)
    {
        if(turn %2==1)
        {
        c=c-gcd(a,c);
        }
        else
        {
            c=c-gcd(b,c);
        }
        turn++;
    }
    if(turn%2==1) cout<<"1\n";
    else cout<<"0\n";
    //<<gcd(a,b);
}

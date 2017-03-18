#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int T=t;
    while(t--)
    {
        int l,b,h;
        cin>>l>>b>>h;
        if(l>20||b>20||h>20)
        cout<<"Case "<<T-t<<": bad";
        else
        cout<<"Case "<<T-t<<": good";
    }
    return 0;
}

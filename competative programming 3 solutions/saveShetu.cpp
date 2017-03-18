#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int amount=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="donate")
        {
            int n;
            cin>>n;
            amount+=n;
        }
        else
        cout<<amount<<endl;

    }
}


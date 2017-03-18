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
        long diff;
        diff = n - m;
        if(diff>0)
        cout<<">\n";
        else if(diff==0)
        cout<<"=\n";
        else
        cout<<"<\n";
    }
    return 0;
}

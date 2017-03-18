#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int x,y;
        cin>>x>>y;
        while(t-- && t>=0)
        {
            int a,b;
            cin>>a>>b;
            if(a>x && b>y)
            cout<<"NE\n";
            if(a<x && b>y)
            cout<<"NO\n";
            if(a<x && b<y)
            cout<<"SO\n";
            if(a>x && b<y)
            cout<<"SE\n";
            if(a==x || b==y)
            cout<<"divisa\n";


        }
        cin>>t;
    }
    return 0;
}

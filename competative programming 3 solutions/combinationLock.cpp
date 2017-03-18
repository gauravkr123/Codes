#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c;
    cin>>i>>a>>b>>c;
    while(a!=0 || i!=0 || b!=0 || c!=0)
    {
        i=40-i;a=40-a;b=40-b;c=40-c;
        int angle = 1080;
        if(a-i<0)
        angle+=(a-i)*9;
        else
        angle+=(a-i+360)*9;
        if(a-b<0)
        angle+=(a-b)*9;
        else
        angle+=(a-b+360)*9;
        if(c-b<0)
        angle+=(c-b)*9;
        else
        angle+=(c-b+360)*9;
        cout<<angle<<endl;
        cin>>i>>a>>b>>c;
    }
    return 0;

}

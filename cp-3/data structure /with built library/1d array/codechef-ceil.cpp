#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int diff= a-b;
    if(diff==1)
    {
        cout<<"2"<<endl;
        return 0;
    }
    if(diff%10==0)
    cout<<diff+1<<endl;
    else
    cout<<diff-1<<endl;
    return 0;
}

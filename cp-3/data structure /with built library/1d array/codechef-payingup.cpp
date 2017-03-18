#include<bits/stdc++.h>
using namespace  std;
bool check(int a[],int l,int r,int m)
{
    if(l==r)
    {
        if(a[l]==m)
        {
            return true;
        }
        else
        return false;
    }

    else
    {

        if(check(a,l+1,r,m-a[l])==true)
        {
            return true;
        }
        else
        return check(a,l+1,r,m);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n]={};
        int counter=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<=m)
            {
                a[counter]=x;
                counter++;
            }

        }
        int r=counter-1;
        if(check(a,0,r,m)==true)
        {
            cout<<"yes\n";
        }
        else
        cout<<"no\n";
    }
    return 0;
}

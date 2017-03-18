#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        int temp=(x-1-i+n-1)/n;
        int j=temp*n-(x-1-i);
        b[j]=a[i];
        cout<<j<<" "<<temp<<endl;
    }
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<"\n";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int uj=a[k-1];
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<uj)
            counter++;
        }
        cout<<counter+1<<"\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int p[n+1]={};
        int temp =m;
        while(temp--)
        {
            int a;
            cin>>a;
            p[a]=1;
        }
        int counter =0;
        for(int i=1;i<n+1;i++)
        {
            if(p[i]==0)
            {
                counter++;
                if(counter%2==1)
                {
                    cout<<i;
                    p[i]=1;
                }
            }
        }
        cout<<"\n";
        for(int i=1;i<n+1;i++)
        {
            if(p[i]==0)
            {
                cout<<i;
            }
        }
        cout<<"\n";
    }
    return 0;
}

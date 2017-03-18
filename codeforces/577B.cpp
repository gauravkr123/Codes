#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        a[i]=x%m;
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {int add=0;

        for(int j=i;j<n;j++)
        {
            add+=a[j];
            if(add%m==0)
            {
                cout<<"YES\n";
                flag=1;
                return 0;
            }

        }


    }

        cout<<"NO\n";
        return 0;
}

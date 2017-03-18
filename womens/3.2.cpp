#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        long long counter=0;
        for(long long i=0;i<n;i++) cin>>a[i];
        long long v;
        cin>>v;
        long long m=*max_element(a,a+n);
        long long r[n]={};
        for(long long i=0;i<v;i++)
        {
            long long s,l;
            cin>>s>>l;
            for(long long j=0;j<=n;j++)
            {
                if(a[j]>=s && a[j]<=l && r[i]==0)
                {
                    r[i]=1;
                    counter++;
                }
            }
        }


        cout<<counter<<"\n";
    }
}


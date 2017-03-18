#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector <long long> a(n);
        long long counter=0;
        for(long long i=0;i<n;i++) cin>>a[i];
        long long v;
        cin>>v;
        long long m=*max_element(a.begin(),a.end());
        vector <long long > r(m+1);
        for(int i=0;i<m+1;i++)
        r[i]=0;
        for(long long i=0;i<v;i++)
        {
            long long s,l;
            cin>>s>>l;
            for(long long j=s;j<=min(l,m);j++)
            r[j]=1;
        }
        //for(long long i=0;i<m+1;i++)
        //cout<<r[i]<<endl;
        for(long long i=0;i<n;i++)
        {
            if(r[a[i]]==1)
            {
                counter++;
               // cout<<a[i]<<endl;
            }

        }
        cout<<counter<<"\n";
    }
}

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
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int min_a=a[1]-a[0];
        for(int i=1;i<n;i++)
        {
            if(min_a>a[i]-a[i-1])
            {
                min_a=a[i]-a[i-1];
            }
        }
        cout<<min_a<<"\n";
    }
}

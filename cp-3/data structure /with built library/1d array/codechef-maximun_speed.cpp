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
        int counter=1;
        long a[n];

        cin>>a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=a[i-1])
            {
                counter++;
            }
            else
            a[i]=a[i-1];
        }
        cout<<counter<<"\n";
    }
    return 0;
}

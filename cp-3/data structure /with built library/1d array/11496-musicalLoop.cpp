#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    while(scanf("%d",&n),n)
    {
        int counter=0;
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=a[0];
        //a[n+1]=a[2];
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]>max(a[i],a[i+2]) || a[i+1]<min(a[i],a[i+2]))
            counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}

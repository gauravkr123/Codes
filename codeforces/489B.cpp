#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int counter=0;
    int index=0;
    for(int i= 0;i<n;i++)
    {
        for(int j=index;j<m;j++)
        {
            if(fabs(a[i]-b[j])==1)
            {
               counter++;
               index=j;
               break;
            }
        }
    }
    cout<<counter<<endl;

}

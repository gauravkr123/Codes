/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n]={};
    //map<int ,int> m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        //m[a[i]]=0;
    }
    int x=sum/(n/2);
    for(int i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]==x-a[i] && b[i]==0)
                {
                    cout<<i+1<<" "<<j+1<<"\n";
                    b[i]=1;
                    b[j]=1;
                    break;
                }
            }
        }
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==b[i]&& c[j]==0)
            {
                cout<<j+1<<" ";
                c[j]=1;
                break;
            }

        }
        for(int j=0;j<n;j++)
        {
            if(a[j]==b[n-1-i] && c[j]==0)
            {
                cout<<j+1<<" ";
                c[j]=1;
                break;
            }

        }
        cout<<"\n";
    }
}

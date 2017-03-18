/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,k;
    cin>>n>>s>>k;
    map<int,int> m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
        m[a]=i/k+1;
    }
    long sum=0;
    for(int i=0;i<s;i++)
    {
        int b;
        cin>>b;
        sum+=m[b];
        for(int j=0;j<n;j++)
        {
            if(arr[j]==b)
            {
                int temp1=m[arr[j]];
                m[arr[j]]=m[arr[j-1]];
                m[arr[j-1]]=temp1;
                temp1=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp1;
                break;
            }

        }

    }
    cout<<sum<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,k;
    cin>>n>>s>>k;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        b[x-1]=i;

    }
    long sum=0;
    for(int i=0;i<s;i++)
    {
        int y;
        cin>>y;
        for(int j=0;j<n;j++)
        {
            if(a[j]==y)
            {
                sum+=b[j]/k+1;
                if(j!=0){
                int temp1=b[a[j]-1];
                b[a[j]-1]=b[a[j-1]-1];
                b[a[j-1]-1]=temp1;
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=a[j];

                }
            }
        }
        for(int j=0;j<n;j++)
        cout<<b[j]<<" ";
        cout<<"\n";
        cout<<sum<<endl;
    }
    cout<<sum<<"\n";
}

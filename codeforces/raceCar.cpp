#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) , n)
    {
        int a[n+1];

        int b[n];
        int flag=0;
        memset(a,0,sizeof a);
         a[0]=1;
        for(int i=1;i<=n;i++)
        {
            int d,e;
            cin>>d>>e;
            int c=i+e;
            if(c>=1 && c<=n)
            {
                //cout<<a[c]<<endl;
                if(a[c]==0)
                { //cout<<a[c]<<endl;
                    a[c]++;
                    b[c-1]=d;
                    flag++;
                    //cout<<"*"<<endl;
                }


            }

        }
        if(flag==n)
        {
            for(int i=0;i<n-1;i++) cout<<b[i]<<" ";
            cout<<b[n-1]<<"\n";
        }
        else
        cout<<"-1"<<endl;

    }
}

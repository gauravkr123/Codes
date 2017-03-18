#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        if(n<=7)
        cout<<"IMPOSSIBLE\n";
        else
        {
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //cout<<"  "<<a[n-1]<<endl;
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])>200){
            cout<<"IMPOSSIBLE\n";
            flag =1;
            }
        }
       // cout<<" "<<flag<<endl;
        if(flag==0 && 2*(1422-a[n-1])<=200)
        {
            cout<<"POSSIBLE";
        }
        }
    }
}

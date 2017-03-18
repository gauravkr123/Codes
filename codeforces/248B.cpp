#include<bits/stdc++.h>
using namespace std;
int no(int n)
{
    int m=log10(n)+1;
    if(m==1)
    return n;
    else
    {
        int d=pow(10,m-2);
        int a= d+8;
        for(int i=d*100;i<=n;i++)
        {
            if(i%10==i%(d*100))
            a++;
            //cout<<" "<<i<<endl;
        }
        return a;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    int x=no(b)-no(a-1);
    cout<<x<<"\n";
    return 0;
}

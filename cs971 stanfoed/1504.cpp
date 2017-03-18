#include<iostream>
#include<math.h>
using namespace std;
int reverse_n(int n)
{
    int temp=n;
    int p=log10(n)+1;
    int a[p];
    int i=0;
    int trailzero=0;
    while(temp>0)
    {
        a[i]=temp%10;
        temp/=10;
        i++;
    }
    int k=0;i=0;

    for(int j=p-1;j>=0;j--)
    {
        k+=a[j]*pow(10,(p-1)-j);
    }
    return k;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<reverse_n(reverse_n(n)+reverse_n(m))<<"\n";
    }
    return 0;
}

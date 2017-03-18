#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],b[n+1]={};
cin>>a[0];
b[1]=a[0];
for(int i=1;i<n;i++)
{
    cin>>a[i];
    b[i+1]=b[i]+a[i];
}
int m,k;
cin>>m>>k;
int counter=0;
for(int i=0;i<n+1;i++)
{
   if(b[i]-b[i-k]==m && (i-k)>=0 && (i-k)<(n+1))
   counter++;
}
cout<<counter<<endl;
}

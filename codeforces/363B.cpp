#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int min=INFINITY,j=0;int sum;
    for(int i=0;i<n-2;i++){
    sum=a[i]+a[i+1]+a[i+2];
    if(sum<min)
    {min=sum;
    j=i}
    }
    cout<<min<<endl;

}

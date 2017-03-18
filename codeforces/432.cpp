#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int counter=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]+k<=5)
        counter++;
    }
    cout<<counter/3<<endl;
    return 0;
}

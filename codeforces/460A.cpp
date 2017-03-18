#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int socks=n;
    int day=1;
    while(socks!=0){
    socks--;
    if(day%m==0)
    socks++;
    day++;
    }
    cout<<day-1<<"\n";
    return 0;
}

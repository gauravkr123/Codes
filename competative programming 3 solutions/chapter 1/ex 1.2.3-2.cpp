#include<bits/stdc++.h>
#include<math.h>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    sort(a,a+10);
    cout<<a[0]<<" ";
    for(int i=1;i<10;i++){
    if(a[i]!=a[i-1])
    cout<<a[i]<<" ";
    }
}

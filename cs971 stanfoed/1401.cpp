#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=0;
        long long value =n;
        while(value!=0)
        {
            value=value/5;
            sum+=value;
        }
        cout<<sum<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a;
    cin>>a;
    int n,k;
    cin>>n>>k;
    int counter=0;
    while(a>=0)
    {
        counter++;
        if(counter<=k)
        {
            cout<<a%(n+1)<<" ";
            a=a/(n+1);
        }
        else
        break;

    }


}


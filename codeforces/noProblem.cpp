#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int counter=1;
    while(n>=0)
    {
        cout<<"Case "<<counter<<":\n";
        counter++;
        int a[12],b[12];
        for(int i=0;i<12;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<12;i++)
        {
            cin>>b[i];
        }
        int res=n;
        for(int i=0;i<12;i++)
        {
            if(res>=b[i])
            {
                cout<<"No problem!:D\n";
                res-=b[i];
                res+=a[i];
            }
            else
            {
                cout<<"No problem. :(\n";
                res+=a[i];
            }


        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct value{
    string s;
    int n;
    int a[n];
    };
int main()
{


    int t,r;
    cin>>t>>r;
    value store[t];
    for(int k=0;k<t;k++)
    {
        value v;
        cin>>v.s;
        int base,sz,d;
        cin>>base>>sz>>d;
        int dm[2*d];
        for(int i=0;i<2*d;i++)
        {
            cin>>dm[i];
        }
        v.n=d+1;
        v.a[d]=sz;
        for(int i=1;i<d;i++)
        {
            v.a[d-i]=v.a[d-i+1]*(dm[2*(d-i-1)+1]-dm[2*(d-i-1)+1]+1);
        }
        v.a[0]= base;
        for(int i=1;i<=d;i++)
        {
            v.a[0]-=dm[2*(i-1)]*v.a[i];
        }
        store[k]=v;
    }
    while(r--)
    {
        string p;
        cin>>;p

        for(int i=0;i<t;i++)
        {
            if(store[i].s==p)
            {
                int j=store[i].a[0];
                for(int y=1;y<=d;y++)
                {
                    int h;
                    cin>>h;
                    j+=h*store[i].a[y];
                }
                cout<<j<<endl;
                break;
            }
        }
    }

}

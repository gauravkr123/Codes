#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;

        cin>>a>>b;
        string s;
        cin>>s;
        int h[a]={};
        //map <int,struct> m;
        for(int i=0;i<a;i++) {
           h[i]=s[i]-'0';
        }
        for(int j=0;j<b;j++)
        {
            int counter=1,maxa=0,m_i=0,m_j=0;
            for(int i=1;i<a;i++)
            {
                if(h[i]==h[i-1])
                counter++;
                else
                {
                    if(maxa<counter)
                    {
                        maxa=counter;
                        m_j=i-1;
                        m_i=i-counter-1;
                        counter=1;
                    }
                }
            }
            if(maxa==1)
            break;
            int x=(m_i+m_j)/2;
            if(h[x]==1)
            h[x]=0;
            else
            h[x]=1;

        }
        int counter=1,maxa=0;
            for(int i=1;i<a;i++)
            {
                if(h[i]==h[i-1])
                counter++;
                else
                {
                    if(maxa<counter)
                    {
                        maxa=counter;
                        counter=1;
                    }
                }
            }
            cout<<maxa<<"\n";

    }
    return 0;
}

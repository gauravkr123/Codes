#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;

    while(scanf("%d %d",&a,&b),(a||b))
    {
        int death[a+1]={};
        while(b--)
        {
            int x,y;
            cin>>x>>y;
            for(int i=x;i<=y;i++)
            {
                death[i]=1;
            }

            while(x--)
            {
                if(x>=1)
                {
                    if(death[x]==0)
                    {
                        cout<<x<<" ";
                        break;
                    }
                }
                else
                {
                    cout<<"* ";
                    break;
                }

            }
            while(y++)
            {
                if(y<=a)
                {
                    if(death[y]==0)
                    {
                        cout<<y<<" ";
                        break;
                    }
                }
                else
                {
                    cout<<"* ";
                    break;
                }

            }
            cout<<"\n";
        }
        cout<<"-\n";
    }
}

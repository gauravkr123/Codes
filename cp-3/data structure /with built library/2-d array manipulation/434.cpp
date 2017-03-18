#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int side;
        cin>>side;
        int arena[side][side],front[side],right[side];
        for(int i=0;i<side;i++)
        cin>>front[i];
        for(int i=0;i<n;i++)
        cin>>right[i];
        int maximum=0,minimum=0;
        bool f_front,r_right;
        for(int i=0;i<side;i++)
        {
            for(int j=0;j<side;j++)
            {
                if(front[i]==right[j] && !f_front && !r_right)
                {
                    minimum+=front[i];
                    f_front=true;
                    r_right=true;
                }
            }
        }
        for(int i=o;i<side;i++)
        if(!f_front)
        {

        }

    }
}

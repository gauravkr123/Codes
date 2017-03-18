#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c[1001]={};
        int record[3]={};
        vector<int> a[3];
        for(int i=0;i<3;i++)
        {
            int n;
            cin>>n;

            while(n--)
            {
                int x;
                cin>>x;
                a[i].push_back(x);
                c[x]++;
            }
        }
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<a[i].size();j++)
                {
                    if(c[a[i][j]]==1)
                    {
                        record[i]++;
                    }
                }
            }
            sort(a[0].begin(),a[0].end());
             sort(a[1].begin(),a[1].end());
              sort(a[2].begin(),a[2].end());
              for(int j=0;j<3;j++)
              {
                 if(record[j]==*max_element(record,record+3));
                {
                    for(int i=0;i<a[j].size();i++)
                    {
                        if(c[a[i][j]]==1)
                        cout<<a[j][i]<<endl;
                    }
                }

              }

        cout<<"\n";

    }
    return 0;

}

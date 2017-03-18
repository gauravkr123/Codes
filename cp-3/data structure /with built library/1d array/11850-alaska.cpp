#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(scanf("%d",&n),n)
    {
        vector<int> loc;
        vector<int> dis;
        int l;
        while(n--)
        {
            cin>>l;
            loc.push_back(l);
        }
        //loc.push_back((1422-loc[loc.size()-1]*2))
        sort(loc.begin(),loc.end());
        for(int i=1;i<loc.size();i++)
        {
            dis.push_back(loc[i]-loc[i-1]);
        }
        dis.push_back((1422-loc[loc.size()-1]*2));
        sort(dis.begin(),dis.end());
        if(dis[dis.size()-1]>200)
        cout<<"IMPOSSIBLE\n";
        else
        cout<<"POSSIBLE\n";
    }
    return 0;
}

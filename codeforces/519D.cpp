#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26];//={1, 1 ,-1, 1 ,1 ,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 1, 1, 1, 8 ,1, 1, 1, 1, 1, 1};
    for(int i=0;i<26;i++)cin>>a[i];
    string s;
    cin>>s;
    //cout<<s;

    int ans=0;

    int n=s.length();
    for(int i=0;i<n;i++)
    {
        int counter=0;
        for(int j=i+1;j<n-1;j++)
        {
            counter+=a[s[j]-'a'];
            //cout<<counter<<endl;

            if(counter==0 && s[j+1]==s[i])
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

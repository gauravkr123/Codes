#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n= s.length();
        int last = (s[n-2]-'0')*10+(s[n-1]-'0');
        if(s='1' ||s=='4' || s=='78')
        {
            cout<<"+\n";
        }
        else if(last==35)
        cout<<"-\n";
        else if ()
    }
}

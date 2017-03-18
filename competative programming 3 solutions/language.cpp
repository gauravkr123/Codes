#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    string s;
    cin>>s;
    while(s[0]!='#')
    {
        cout<<i<<endl;
        i++;
        cin>>s;
    }
    return 0;
}

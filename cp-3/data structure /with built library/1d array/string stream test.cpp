#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char ,int> m;
    int n;
    int k;


    string  s;
    cin>>n;
    getline(cin,s);
    while(n--)
    {
        char f;
        stringstream ss;
        getline(cin,s);
        ss<<s;
        ss>>c;
        ss>>k;
        ss>>f;

        cout<<c<<" "<<k<<" "<<f<<"*"<<endl;
    }
}

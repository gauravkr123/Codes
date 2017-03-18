#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1;
    string s;
    cin>>s;
    while(s!="*")
    {
        if(s=="Hajj")
        cout<<"Case "<<n<<": Hajj-e-Akbar\n";
        else
        cout<<"Case "<<n<<": Hajj-e-Asghar\n";
        n++;
        cin>>s;
    }
}

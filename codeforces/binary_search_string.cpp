#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<string> s;
    for(int i=0;i<4;i++)
    {
       string d;
       cin>>d;
       s.push_back(d);

    }
    if(binary_search(s.begin(), s.end(), "vedic"))
    cout<<"yes\n";
    else
    cout<<"no\n";
    return 0;
}

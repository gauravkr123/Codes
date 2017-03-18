#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char a[5];
        scanf("%s",&a);
        if(strlen(a)==5)
        {
            cout<<"3\n";
        }

        else if((a[0]=='t' && a[1]=='w') || (a[0]=='t' && a[2]=='o') || (a[1]=='w' && a[2]=='o'))
        cout<<"2\n";
        else
        cout<<"1\n";
    }
}

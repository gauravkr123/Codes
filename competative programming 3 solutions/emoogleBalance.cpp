#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h=1;
    while(n!=0)
    {
        int counter=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a!=0)
            counter+=1;
            else
            counter-=1;
        }
        cout<<"Case "<<h<<": "<<counter<<endl;
        cin>>n;
        h++;
    }
}

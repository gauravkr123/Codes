#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int a[26]={};
    string s;
    char b[72];
    for(int i=0;i<4;i++)
    {
        getline(cin,s);
        for(int k=0;k<s.size();k++)
        {
            if(s[k]>='A' && s[k]<='Z')
            a[s[k]-65]++;
        }

    }
    //for(int i=0;i<26;i++)
    //cout<<a[i]<<" ";
    //cout<<"\n";
    for(int i=*max_element(a,a+26);i>=1;i--)
    {
        for(int k=0;k<26;k++)
        {
            if(i<=a[k])
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<"\n";
    }
    for(int i=65;i<26+65;i++)
    cout<<(char)i<<" ";
    return 0;

}

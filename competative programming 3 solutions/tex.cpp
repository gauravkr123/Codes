#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[200];
    //scanf("%s",&s);
    while(scanf("%s",&s)!=EOF)
    {
       int counter=1;
        for(int i=0;i<strlen(s);i++)
        {

        if(s[i]=='\"' && counter %2==1 )
        {
            cout<<"``";
            counter++;
        }
        else if(s[i]=='\"' && counter %2==0)
        {
            cout<<"''";
            counter++;
        }
        if(s[i]!= '\"' )
        cout<<s[i];
        }

    }
}


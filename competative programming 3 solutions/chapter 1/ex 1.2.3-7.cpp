#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10]={'A','B','C','D','E','F','G','H','I','J'};
    do
    {
        for(int i=0;i<10;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }while(next_permutation(a,a+10));
}

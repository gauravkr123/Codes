#include<iostream>
using namespace std;
int max_array(int a[],int l,int r)
{
    if(l==r) return a[l];
    else
    {    int a_l=max_array(a,l,(l+r)/2);
        int a_r=max_array(a,(l+r)/2+1,r);
        if(a_l>=a_r)
        {return a_l;}
        else
        {return a_r;}
    }
}
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    cin>>a[i];
    cout<<max_array(a,0,9);
    return 0;
}

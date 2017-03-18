#include<iostream>
using namespace std;
struct score{
    int s;
    int d;
};
score result(int a[],int l,int r,score sr)
{
    if(l==r)
        {
            //sr.s+=a[l];
            cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
            return sr;

        }
    if(a[l]>a[r])
    {
        sr.s+=a[l];
        l=l+1;
        cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
        if(l==r)
        {
            sr.d+=a[l];
            cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
            return sr;
        }

        if(a[l]>a[r])
        {
            sr.d+=a[l];
            l=l+1;
            cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
        }
        else
        {
            sr.d+=a[r];
            r=r-1;
            cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
        }
    }

    else
    {
        sr.s+=a[r];
        r=r-1;
        cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
        if(l==r)
        {
            sr.d+=a[l];
            cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
            return sr;
        }
        if(a[l]>a[r])
        {
            sr.d+=a[l];

            l=l+1;
            cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
        }
        else
        {
            sr.d+=a[r];
            r=r-1;
            cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
        }
    }
    if(l==r){
    cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
    return sr;}
    //cout<<"  "<< (sr.s) <<"  "<<sr.d<<"  "<<l<<"  "<<r<<endl;
    sr.s+=result( a,l,r,sr).s;
     sr.d+=result( a,l,r,sr).d;


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    score init ;
    init.s=0;init.d=0;
    score sr =result(a,0,n-1,init);
    cout<<sr.s<<" "<<sr.d<<endl;
    return 0;
}

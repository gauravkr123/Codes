#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y,m;
    cin>>x>>y>>m;
    long counter=0;
    if(x==m || y==m)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(x<0 && y<0 && m>=0){

    cout<<"-1"<<endl;
    return 0;
    }
    if(x<0 && y<0 && m>max(x,y)){

    cout<<"-1"<<endl;
    return 0;
    }
    if((x==0 || y==0)&&m!=0){
    cout<<"-1"<<endl;
    return 0;
    }
    if(min(x,y)<0 && x*y<0){
        counter = (fabs(x)+fabs(y)-1)/max(x,y);
        x=max(x,y);
        y=min(x,y)+counter*max(x,y);
        //cout<<" "<<x<<" "<<y<<endl;
    }
    while(max(x,y)<m){
        if(x>=y)
        y=x+y;
        else
        x=x+y;
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //vector<int> v;
   //memset(a,n/4+1,sizeof a);
   int maxx=n/4+1,x=0,y=0;
    for(int i=0;i<7;i++){
        if((n-4*i)%7==0){
            if((i+(n-4*i)/7)<maxx){
            maxx=(i+(n-4*i)/7);
            x=i;
            y=((n-4*i)/7);
            }
        }

    }
    for(int i=1;i<=x;i++){
    cout<<"4";

    }
    for(int i=1;i<=y;i++){
        cout<<"7";
    }
    if(x==0&&y==0)
    cout<<"-1"<<endl;
    return 0;


}




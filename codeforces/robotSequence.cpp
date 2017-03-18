#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string c;
    int counter =0;
    cin>>c;

    for(int i=0;i<n;i++){
        int a=0,b=0;

        if(c[i]=='U'){
            a=a-1;
            b=b;
            //cout<<" "<<"u"<<endl;
        }
        if(c[i]=='R'){
            a=a;
            b=b+1;
            //cout<<" "<<"r"<<endl;
        }
        if(c[i]=='L'){
            a=a;
            b=b-1;
            //cout<<" "<<"l"<<endl;
        }
        if(c[i]=='D'){
            a=a+1;
            b=b;
           // cout<<" "<<"d"<<endl;
        }

        for(int j=i+1;j<n;j++){


        if(c[j]=='U'){
            a=a-1;
            b=b;
            //cout<<" "<<"u"<<endl;
        }
        if(c[j]=='R'){
            a=a;
            b=b+1;
            //cout<<" "<<"r"<<endl;
        }
        if(c[j]=='L'){
            a=a;
            b=b-1;
            //cout<<" "<<"l"<<endl;
        }
        if(c[j]=='D'){
            a=a+1;
            b=b;
            //cout<<" "<<"d"<<endl;
        }
        if(a==0 &&b==0)
        counter++;


        }


    }
    cout<<counter<<endl;
    return 0;
}

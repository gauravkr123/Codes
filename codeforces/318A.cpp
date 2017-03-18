#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2){
            cout<<2*k-1<<"\n";
        }
        else
        cout<<2*k-n<<"\n";
    }
    else
    {
        if(k<=n/2+1){
            cout<<2*k-1<<"\n";
        }
        else
        cout<<2*(k-n/2-1)<<"\n";
    }
    return 0;
}

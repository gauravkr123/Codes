#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;
    int v[n]={};
    int b[n]={};
    int counter=0;
    int d=0;
    for(int i=0;i<n;i++){
            if(isPrime(i)==true){
            v[d]=i;
            d++;
        }
        d=0;
        }
     for(int i=0;i<n-1;i++){
        if(isPrime(v[i]+v[i+1]+1)==true && v[i+1]!=0){
            b[d]=(v[i]+v[i+1]+1);
        //cout<<" "<<b[i]<<endl;
        d++;
        }

        }
        for(int i=0;i<n;i++){
            if(b[i]<=n && b[i]!=0){
                counter++;
            }

        }
       // cout<<" "<<counter<<endl;
        if(counter>=k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;



}

#include<bits/stdc++.h>
using namespace std;
void permute(string s,int l,int r){
    if(l==r)
    cout<<s<<" ";
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        permute(s,0,n-1);
        cout<<endl;
    }

}


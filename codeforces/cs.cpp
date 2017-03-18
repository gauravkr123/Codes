#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0)
return false;

}
return true;
}
int main()
{
int n;
cin>>n;
if(n%2==1 && n!=1)
cout<<"1"<<endl;
if(n==1)
cout<<"3"<<endl;
if(n%2==0)

for(int m=1;m<1000;m++)
{
if(isPrime(n*m+1)==false)
{
cout<<m<<endl;
break;
}

}
}


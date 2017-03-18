#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m]={};
    map<int,string> ma;
    string sa;
    getline(cin,sa);
    for(int i=0;i<m;i++)
    {
        string s;
        int counter=0;
        getline(cin,s);
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(s[j]>s[k])
                counter++;
            }
        }
        ma[counter] = s;
        arr[i]=counter;
    }
    sort(arr,arr+m);
    for(int i=0;i<m;i++)
    {
        cout<<ma[arr[i]]<<endl;
    }

    return 0;
}

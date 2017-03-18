#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    int a,b;
    if(n!=1)
    a=(float)log10(n-1)/(float)log10(7)+1;
    else
    a=1;
    if(m!=1)
     b=(float)log10(m-1)/(float)log10(7)+1;
    else
    b=1;
    //cout<<a<<" "<<b<<endl;
    int ans=0;
    if(a+b>7)
    cout<<"0\n";
    else
    {
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                int arr[7]={};
                long long x=i,y=j;
                for(int k=0;k<a;k++)
                {
                    arr[x%7]++;
                    x/=7;
                    //cout<<"*\n";
                }
                for(int k=0;k<b;k++)
                {
                    arr[y%7]++;
                    y/=7;
                   // cout<<"%\n";
                }
                if(*max_element(arr,arr+7)<=1)
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}/*
#include<bits/stdc++.h>

using namespace std;
template <typename T>
T input() {
    T res;
    cin >> res;
    return res;
}

int main() {


    size_t n, m;
    cin >> n >> m;

    size_t len1 = 1, len2 = 1;
    for (size_t a = 7; a < n; a *= 7)
        len1 += 1;
    for (size_t b = 7; b < m; b *= 7)
        len2 += 1;
cout<<len1<<" "<<len2<<endl;
    size_t ans = 0;
    if (len1 + len2 <= 7)
        for (size_t i = 0; i != n; ++i)
            for (size_t j = 0; j != m; ++j) {
                vector<size_t> used(7, 0);

                for (size_t a = i, k = 0; k != len1; a /= 7, ++k)
                    used[a % 7] += 1;
                for (size_t b = j, k = 0; k != len2; b /= 7, ++k)
                    used[b % 7] += 1;

                if (*std::max_element(used.begin(), used.end()) <= 1)
                    ++ans;
            }

    cout << ans << "\n";

    return 0;
}*/

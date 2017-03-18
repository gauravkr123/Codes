#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    map<char,int> m;
    char c;
    int k;
    while(t--)
    {
        int n;
        cin>>n;
         m.clear();
        getline(cin,s);

        while(n--)
        {

          stringstream ss;
          getline(cin ,s);
          ss << s;
			c = ss.get();
			ss >> k;
			m[c] = k;
        }
        int g;
        cin>>g;
        getline(cin,s);
         long sum=0;
        while(g--)
        {

            getline(cin,s);

            for(int i=0;i<s.size();i++)
            {
                if(m.find(s[i])!=m.end())
                {
                    sum+=m[s[i]];
                }
            }

        }
        printf("%.2f\n",sum/100.00);


    }
    return 0;
}

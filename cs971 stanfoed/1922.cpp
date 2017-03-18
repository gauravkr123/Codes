#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
        break;
        double min_x=4.5*3600;
        double v,t;
        while(n--)
        {
            cin>>v>>t;
            if(t<0)
            continue;

            double k=4.5 / v * 3600 + t;
            if(k<min_x)
            min_x=k;
        }
        cout<<ceil(min_x)<<endl;
    }
    return 0;
}

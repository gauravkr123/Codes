#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    while(scanf("%f",&a),a)
    {

        float temp = a;
        float i=2.0;
        int counter=0;
        while(temp>0.00)
        {
            temp = temp-1.0/i;
            i++;
            counter++;
        }
        cout<<counter<<" card(s)"<<endl;

    }
    return 0;
}

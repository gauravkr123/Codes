#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    cout<<"\n";
    while(n!=0)
    {
        //char a[n][10];
        int counter[n]={};
         //cin.get( a, n );
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                char c;
                //scanf("%[...]",&c);
                cin>>noskipws>>c;
                //cout<<"  *"<<c<<i<< " "<<j<<endl;
                if(c==32)
                {
                    counter[i]++;
                   // cout<<" "<<counter[i]<<endl;;
                }
            }
        }
        int min_counter= *min_element(counter,counter+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=counter[i]-min_counter;
        }
        cout<<min_counter<<"\n";
    }
    return 0;

}

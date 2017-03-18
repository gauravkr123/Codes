#include<bits/stdc++.h>
bool isExist(int k,int l)
{
    if(k>=0&&k<=3&&l>=0&&l<=3)
    return true;
    else
    return false;
}
using namespace std;
int main()
{
    char a[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];

        }
    }
int c=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='.')
            {
                if((isExist(i-1,j-1) && isExist(i+1,j+1) && a[i-1][j-1]=='x' &&a[i+1][j+1]=='x')||
                (isExist(i-1,j+1) && isExist(i+1,j-1) && a[i-1][j+1]=='x' &&a[i+1][j-1]=='x')||
                (isExist(i-1,j) && isExist(i+1,j) && a[i-1][j]=='x' &&a[i+1][j]=='x')||
                (isExist(i,j-1) && isExist(i,j+1) && a[i][j-1]=='x' &&a[i][j+1]=='x')||
                ((isExist(i-2,j-2)&&isExist(i-1,j-1)&&a[i-1][j-1]=='x'&&a[i-2][j-2]=='x')||
                (isExist(i-2,j)&&isExist(i-1,j)&&a[i-2][j]=='x'&&a[i-1][j]=='x')||
                (isExist(i,j-2)&&isExist(i,j-1)&&a[i][j-1]=='x'&&a[i][j-2]=='x')||
                (isExist(i-1,j+1)&&isExist(i-2,j+2)&&a[i-2][j+2]=='x'&&a[i-1][j+1]=='x')||
                (isExist(i,j+2)&&isExist(i,j+1)&&a[i][j+1]=='x'&&a[i][j+2]=='x')||
                (isExist(i+2,j+2)&&isExist(i+1,j+1)&&a[i+1][j+1]=='x'&&a[i+2][j+2]=='x')||
                (isExist(i+1,j)&&isExist(i+2,j)&&a[i+1][j]=='x'&&a[i+2][j]=='x')||
                (isExist(i+2,j-2)&&isExist(i+1,j-1)&&a[i+2][j-2]=='x'&&a[i+1][j-1]=='x')))

                {
                    cout<<"YES"<<endl;
                    c=1;
                    break;
                }

            }

        }
        if(c==1)
        break;
    }
    if(c==0)
    cout<<"NO"<<endl;


}

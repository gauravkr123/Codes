#include<bits/stdc++.h>
using namespace std;
vector<int> vect[10];
 int current[10];

void moveAontoB(int a,int b )
{

int x=current[a], y=current[b];
for(int j=vect[x].size()-1;j>=0;j--)
{
    if(vect[x][j]==a)
    {
     break;
    }

    current[vect[x][j]]=vect[x][j];
    vect[x].pop_back();

}
vect[x].pop_back();
current[a]=y;
for(int j=vect[y].size()-1;j>=0;j--)
   {
                if(vect[y][j]==b)
                {
                    break;
                }

                current[vect[x][j]]=vect[x][j];
                vect[x].pop_back();

            }
            vect[y].push_back(a);

}
void moveAoverB(int a,int b ,int x,int y)
{


            for(int j=vect[x].size()-1;j>=0;j--)
            {
                if(vect[x][j]==a)
                {
                    break;
                }

                current[vect[x][j]]=vect[x][j];
                vect[x].pop_back();

            }
    vect[x].pop_back();
    current[a]=y;
    vect[y].push_back(a);

}
void pileAontoB(int a,int b ,int x,int y)
{
    vector<int> temp;

            for(int j=vect[x].size()-1;j>=0;j--)
            {
                if(vect[x][j]==a)
                {
                    break;
                }

                current[vect[x][j]]=y;
                temp.push_back(vect[x][j]);
                 vect[x].pop_back();

            }
    vect[x].pop_back();
    current[a]=y;
    for(int j=vect[y].size()-1;j>=0;j--)
            {
                if(vect[y][j]==b)
                {
                    break;
                }

                current[vect[x][j]]=vect[x][j];
                vect[x].pop_back();

            }
            vect[y].push_back(a);
            for(int i=temp.size()-1;i>=0;i++)
            {
                vect[y].push_back(temp[i]);
                temp.pop_back();
            }

}

void pileAoverB(int a,int b ,int x,int y)
{
    vector<int> temp;

            for(int j=vect[x].size()-1;j>=0;j--)
            {
                if(vect[x][j]==a)
                {
                    break;
                }

                current[vect[x][j]]=y;
                temp.push_back(vect[x][j]);
                 vect[x].pop_back();

            }
    vect[x].pop_back();
    current[a]=y;

            vect[y].push_back(a);
            for(int i=temp.size()-1;i>=0;i++)
            {
                vect[y].push_back(temp[i]);
                temp.pop_back();
            }

}

int main()
{


    for(int i=0;i<10;i++)
    {
        current[i]=i;
        vect[i].push_back(i);
    }

    moveAontoB(9,1);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<vect[i].size();j++)
        cout<<vect[i][j]<<" ";
        cout<<"\n";
    }

}

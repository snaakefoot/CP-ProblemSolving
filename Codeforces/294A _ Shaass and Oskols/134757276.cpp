#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y,i,j,k,m,n,t[102];
    cin>>n;
    t[0]=0;
    for (i=1;i<=n;i++)
    {
        cin>> t[i];
 
    }
    t[n+1]=0;
    cin>>m;
 
    for (i=0;i<m;i++)
    {
        cin>> x;
        cin>> y ;
        t[x-1]+=y-1;
        t[x+1]+=t[x]-y;
        t[x]=0;
 
 
    }
    for (k=1;k<=n;k++)
    {
        cout<<t[k]<<endl;
    }
 
 
}
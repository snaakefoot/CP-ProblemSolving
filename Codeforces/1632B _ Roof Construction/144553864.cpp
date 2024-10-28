#include<bits/stdc++.h>
 
using namespace std;
 
int main ()
{
int u,n,s;
cin>>u;
while(u--)
{
    cin>>n;
    int m =1;
    while(pow(2,m)<=n-1)
        m++;
    s=pow(2,m-1);
    for (int i=1;i<s;i++)
        cout<<i<<' ';
    cout<<0<<' ';
    for(int i=s;i<n;i++)
        cout<<i<<' ';
    cout<<endl;
 
}
}
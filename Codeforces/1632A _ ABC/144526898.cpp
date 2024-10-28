#include<bits/stdc++.h>
 
using namespace std;
 
int main ()
{
int u;
cin>>u;
while(u--)
{   int n;
    cin>>n;
    char t[n];
    for (int i=0;i<n;i++)
        cin>>t[i];
 
    if (n<3 && t[0]!= t[1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
}
 
}
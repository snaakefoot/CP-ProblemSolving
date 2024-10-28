#include<bits/stdc++.h>
 
using namespace std;
 
int main ()
{
int u,n;
string s;
cin>>u;
while(u--)
{
    int s1=0,s2=0;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
    if(s[i]=='1')
        s1++;
    else
        s2++;
    if (n==1 || n==2)
    {
        cout<<0<<endl;
        continue;
    }
    if(s1!=s2 )
        cout<<min(s1,s2)<<endl;
    else
    {
        cout<<s1-1<<endl;
    }
 
}
 
}
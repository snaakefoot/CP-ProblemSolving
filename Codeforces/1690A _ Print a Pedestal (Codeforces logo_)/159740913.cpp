#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t ; cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int h1,h2,h3;
        h1=n/3;
        h2=h1;
        h3=h1;
        if (n%3==0)
        {
            h1+=1;
            h3-=1;
 
        }
        if (n%3==1)
        {
            h1+=2;
 
            h3-=1;
 
        }
        if (n%3==2)
        {
            h1+=2;
            h2+=1;
            h3-=1;
 
        }
 
        cout<<h2<<' '<<h1<<' '<<h3<<endl;
 
 
    }
 
 
}
#include<bits/stdc++.h>
 
using namespace std;
int v[101];
int dp[101]={-1};
int n;
int trouve(int i,bool s,bool c)
    {
        if (i==n)
            return 0;
 
        if(c==1)
        {
            if (v[i]==0 || v[i]==1)
                return 1+ trouve (i+1,0,0);
            if (v[i]==3 || v[i]==2)
                return trouve(i+1,1,0);
 
        }
        if(s==1)
        {
            if (v[i]==0 || v[i]==2)
                return 1+trouve (i+1,0,0);
            if (v[i]==3 || v[i]==1)
                return trouve(i+1,0,1);
 
        }
        if (v[i]==0)
                return 1+trouve(i+1,0,0);
            if (v[i]==3)
                {
                    if (i<n-1 && v[i+1]==3)
                        return min(trouve (i+1,0,1),trouve (i+1,1,0));
                    if (i<n-1 )
                        return trouve(i+1,v[i+1]==1,v[i]==2);
                    return min(trouve (i+1,0,1),trouve (i+1,1,0));
 
                }
            return trouve(i+1,v[i]==2,v[i]==1);
 
 
 
 
 
    }
int main ()
{
int x;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
cout<<trouve(0,0,0);
}
 
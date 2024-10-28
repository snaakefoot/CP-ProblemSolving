#include <iostream>
#include<string>
using namespace std;
 
int main()
{
int u,k;
cin>>u;
int t[7];
for(int i=0;i<u;i++)
{
    int n,test=0;
    cin>>n;
    string t[99];
    string ch;
    int k=0,j=0;
 
    for(int p =0;p<n-2;p++)
    {    cin>>ch;
        t[p]=ch;
    k++;
    }
 
        cout<<t[0][0];
        for (int j=1;j<k;j++)
            {
            if (t[j][0]!=t[j-1][1])
            {
                cout<<t[j-1][1];
                test=1;
            }
            cout<<t[j][0];
            }
        cout<<t[k-1][1];
 
    if (!test)
     cout<<'a';
    cout<<endl;
    }
 
 
 
 
 
 
 
}
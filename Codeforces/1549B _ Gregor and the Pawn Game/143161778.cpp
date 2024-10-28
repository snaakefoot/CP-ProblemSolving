#include <iostream>
 
using namespace std;
 
int main()
{
    int u;
    cin>>u;
    while(u--)
    {
        int n;cin>>n;
        char t[n];
        char p[n];
        for (int i=0;i<n;i++)
            cin>>t[i];
        for (int i=0;i<n;i++)
            cin>>p[i];
        int s=0;
        for (int i=0;i<n;i++)
        {
            if (t[i]=='0'&&p[i]=='1')
                s++;
            if (p[i]=='1'&&t[i]!='0')
            {
                if (i>0 && t[i-1]=='1')
                    s++;
                else
                {
                    if (i<n-1 && t[i+1]=='1')
                    {
                        s++;
                        t[i+1]='2';
                    }
                }
 
            }
        }
        cout<<s<<endl;
 
 
    }
}
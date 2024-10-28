#include <iostream>
 
using namespace std;
 
int main()
{
    int u;
    cin>>u;
    while(u--)
    {
        int n,m,r,c,test=0;
        cin>>n>>m>>r>>c;
        char t[n][m];
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
               {
                   cin>>t[i][j];
                   if (t[i][j]=='B')
                    test=1;
               }
        c--;
        r--;
        if (!test)
            cout<<-1<<endl;
        else
            {if (t[r][c]=='B')
            cout<<0<<endl;
            else
               {    int s=0;
                   for (int i=0;i<m;i++)
                    if (t[r][i]=='B')
                        s=1;
                    if (s==1)
                        cout <<1<<endl;
                    else
                        {for (int i=0;i<n;i++)
                        if (t[i][c]=='B')
                            s=1;
                        if (s==1)
                            cout <<1<<endl;
                        else
                            cout<<2<<endl;}}}
 
 
 
    }
}
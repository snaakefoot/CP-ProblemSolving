#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main()
{
    char c;
    string t="0123456789";
    string ch;
    int n,i,j,c2,s=0,k=0;
    cin>> n;
    cin>> c ;
 
    for (i=0;i<n;i++)
    { string l="" ;
    l=t.substr(0,c-'0'+1);
 
 
 
        cin>>ch;
        j=0;
        c2=0;
 
        while(ch[j]!=0 && c2<=c-'0'+1 )
        {
 
 
            for (k=0;k<c+1-'0';k++)
            {
                if (ch[j]==l[k])
                {
                    l[k]=11;
                    c2++;
 
                    break;
 
                }
           }
 j++;
        }
        if (c2==c-'0'+1)
            s++;
 
    }
 
cout<<s<<endl;
}
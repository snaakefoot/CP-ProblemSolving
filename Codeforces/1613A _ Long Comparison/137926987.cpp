#include <iostream>
using namespace std ;
 
int main()
{
    int x1,p1,u,x2,p2;
    int t[7]={1,10,100,1000,10000,100000,1000000};
    cin>>u;
    for (int i=0;i<u;i++)
    {int e1=0,e2=0;
        cin>>x1;
        cin>>p1;
        cin>>x2;
        cin>>p2;
        for (int j =1;j<7;j++)
        {
            if (x1/(t[j])!=0)
                e1++;
            if (x2/(t[j])!=0)
                e2++;
 
        }
        if (e1+p1>e2+p2)
        cout<<'>'<<endl;
        if (e1+p1<e2+p2)
        cout<<"<"<<endl;
        if (e1+p1==e2+p2)
        {
            while(e1!=0 && e2 !=0)
            {
                if (((x1/t[e1]))%10==(x2/t[e2])%10)
                {
                    e1--;
                    e2--;
                }
                else
                    break;
            }
            if ((x1/(t[e1]))%10>(x2/(t[e2]))%10)
                    cout <<'>'<<endl;
            if ((x1/(t[e1]))%10<(x2/(t[e2]))%10)
                    cout <<'<'<<endl;
            if ((x1/(t[e1]))%10==(x2/(t[e2]))%10 )
            {   if (e1==e2 || (x1%(t[e1]))==(x2%(t[e2])))
                    cout<<'='<<endl;
                else{
                if (e1==0)
                    cout <<'<'<<endl;
                if (e2==0)
                    cout <<'>'<<endl;
                }
            }
            }
        }
 
 
 
 
 
 
 
 
}
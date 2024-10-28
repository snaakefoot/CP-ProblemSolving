#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
int u;
cin>>u;
int n,k,j;
for(int i=0;i<u;i++)
    { cin>>n;
    double x1=pow(n,0.5);
 
    double x2=pow(n,1.0/3);
 
 
    int n1=(int)(x1),n2=(int)(x2);
    if (int(pow(n2+1,3))==n)
        n2++;
    double x3=pow(n2,0.5);
    int com=(int)(x3);
    while(pow(com,3)>n1)
        com--;
 
 
 
    cout<<n1+n2-com<<endl;
 
        }
 
 
}
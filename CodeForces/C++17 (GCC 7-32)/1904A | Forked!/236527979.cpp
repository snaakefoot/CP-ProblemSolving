#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 while(t--){
  int a,b,xk,yk,xq,yq,x,y;cin>>a>>b>>xk>>yk>>xq>>yq;
  int ans=0;
  x=xk+a;
  y=yk+b;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
  x=xk-a;
  y=yk-b;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
  x=xk-a;
  y=yk+b;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
  x=xk+a;
  y=yk-b;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
  if(a!=b){
   
   
   
   x=xk+b;
  y=yk+a;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
  x=xk-b;
  y=yk-a;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
  x=xk-b;
  y=yk+a;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
  x=xk+b;
  y=yk-a;
  if(abs(xq-x)== a and abs(yq-y)==b)
   ++ans;
  else
   if(abs(xq-x)== b and abs(yq-y)==a)
   ++ans;
   
  }
  cout<<ans<<endl;
 }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmax=1e6+1;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t,m,v,rest,cnt,curr;cin>>t;
 int freq[31]={0};
 while(t--){
  cin>>m>>v;
  if(m==1)
   freq[v]++;
  else{
   rest=0,cnt=30;
   while(cnt>=0){
    if((v&(1<<cnt)))
     curr=1;
    else
     curr=0;
    curr+=rest;
    if(curr<=freq[cnt]){
     rest=0;
    }
    else{
     rest=curr-freq[cnt];
     rest*=2;
    }
    
    
    --cnt;
   }
   if(rest==0)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
   
  }
 }
    return 0;
}
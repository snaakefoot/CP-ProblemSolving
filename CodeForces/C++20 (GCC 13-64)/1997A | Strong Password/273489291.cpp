#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
 
 string ch;cin>>ch;
 int n=ch.length(),p=-1;
 
 for(int i=0;i<n-1;++i){
  if(ch[i]==ch[i+1])
   p=i;
 }
 if(p!=-1){
  for(int i=0;i<n;++i){
   cout<<ch[i];
   if(i==p){
    if(ch[i]=='z')
     cout<<'a';
    else
     cout<<'z';
   }
  }
  cout<<endl;
 }
 else{
  if(ch[0]=='a')
   cout<<'z';
  else
   cout<<'a';
  cout<<ch<<endl;
 }
}
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 FAST;
 int t;cin>>t;
 while(t--){
  solve();
  
 }
 
    return 0;
}
#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n,ans=0;cin>>n;
 int a[n];
 
 for(int i=0;i<n;++i){
  cin>>a[i];
 }
 int m;cin>>m;
 while(m--){
   bool test=true;
   string ch;cin>>ch;
   map<int,char> m1;
   map<char,int> m2;
   if(ch.length()!=n)
    cout<<"NO"<<endl;
   else{
    for(int i=0;i<n;++i){
     if(m1.find(a[i])!=m1.end()){
      if(m1[a[i]]!=ch[i])
       test=false;
     }
     else
      m1[a[i]]=ch[i];
     if(m2.find(ch[i])!=m2.end()){
      if(m2[ch[i]]!=a[i])
       test=false;
     }
     else
      m2[ch[i]]=a[i];
     
    }
    if(test){
     cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
   }
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
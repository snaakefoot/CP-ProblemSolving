#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
 
 int n;cin>>n;
 string ch;
 cin>>ch;
 int ans=0,s=0;
 for(int i=0;i<n;i++){
  if(i%2){
  s+=(ch[i]=='(')-(ch[i]==')');
  }
  else{
   if(s>0){
    ch[i]=')';
    --s;
   }
   else{
    ch[i]='(';
    ++s;
   }
  }
 }
 stack<int> st;
 for(int i=0;i<n;++i){
  if(ch[i]=='(')
   st.push(i);
  else{
   ans+=i-st.top();
   st.pop();
  }
 }
 cout<<ans<<endl;
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
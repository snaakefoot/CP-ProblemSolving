#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
void solve() {
  int n;cin>>n;
  string ch;cin>>ch;
  if(n%2==1){
   cout<<-1<<endl;
  return;}
  int i=0,j=n-1,decalage=0;
  vector<int> ans;
  while(i<j && ans.size()<=300){
   
   if(ch[i]==ch[j]){
    if(ch[i]=='0'){
     ch.erase(ch.begin()+i);
     ch.insert(j,"0");
     
     
     ans.push_back(decalage+j+1);
    }
    else{
     ch.erase(ch.begin()+j);
     
     ch.insert(i,"1");
     
     ans.push_back(decalage+i);
     
    }
    decalage++;
   }
   else{
    ++i;
    --j;
   }
  }
  if(ans.size()>300){
   cout<<-1<<endl;
return;}
  cout<<ans.size()<<endl;
  for(int u:ans)
   cout<<u<<' ';
  cout<<endl;
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
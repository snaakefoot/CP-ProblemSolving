#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t=1;
 
 while(t--){
  string ch,ch1;cin>>ch;
  int n=ch.length(),n1;
  string val;cin>>val;
  int k;cin>>k;
  ll ans=0,add,x;
  vector<int> pref;
  set<pair<int,int> > s;
  int p1=31;
  int p2=37;
  ll hash1,hash2;
  for(int i=0;i<n;++i){
   add=(val[ch[i]-'a']=='0');
   if(i)
    pref.push_back(pref[i-1]+add);
   else
    pref.push_back(add);
   x=-1;
   if(pref[i]>k){
    x=distance(pref.begin(),lower_bound(pref.begin(),pref.end(),pref[i]-k));
    ans+=i-x;
   }
   else{
    ans+=i+1;
   }
   hash1=0;
   hash2=0;
   for(int j=i;j>x;--j){
    hash1*=p1;
    hash1+=(ch[j]-'a'+1);
    hash1%=mod;
    hash2*=p2;
    hash2+=(ch[j]-'a'+1);
    hash2%=mod;
    s.insert(make_pair(hash1,hash2));
   }
  }
  
  cout<<s.size()<<endl;
  
  
 }
    return 0;
}
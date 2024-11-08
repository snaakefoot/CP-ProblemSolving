#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmax=1e5+1;
vector<int> adj[Nmax];
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 while(t--){
  int n;cin>>n;
  int isuff[n];
  char suff[n];
  string ch;cin>>ch;
  isuff[n-1]=n-1;
  suff[n-1]=ch[n-1];
  int freq[26]={0};
  freq[ch[n-1]-'a']++;
  for(int i=n-2;i>=0;--i){
   if(ch[i]>=suff[i+1]){
    isuff[i]=i;
    suff[i]=ch[i];
   }
   else{
    isuff[i]=isuff[i+1];
    suff[i]=suff[i+1];
   }
   freq[ch[i]-'a']++;
  }
  int j=0;
  vector<char> v;
  vector<int> vi;
  while(j<n){
   j=isuff[j];
   v.push_back(ch[j]);
   vi.push_back(j);
   
   ++j;
  }
 
  int ans=v.size()-freq[v[0]-'a'];
  sort(v.begin(),v.end());
  for(int i=0;i<vi.size();++i){
   ch[vi[i]]=v[i];
  }
  bool test=true;
  for(int i=1;i<n;++i){
   if(ch[i]<ch[i-1])
    test=false;
  }
  if(test)
   cout<<ans<<endl;
  else
   cout<<-1<<endl;
  
  
 }
    return 0;
}
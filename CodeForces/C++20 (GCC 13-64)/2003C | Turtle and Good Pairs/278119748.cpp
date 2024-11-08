  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
 int n;cin>>n;
 string ch;cin>>ch;
 map<char,int> m;
 set<pair<int,char> > s;
 for(int i=0;i<n;++i){
  m[ch[i]]++;
 }
 vector<char> ans;
 for(int i=0;i<26;++i)
  if(m['a'+i]!=0)
  s.insert(make_pair(m['a'+i],'a'+i));
 int cnt=0;
 while(!s.empty()){
  auto it=s.end();
  --it;
  pair<int,char> p;
  if(cnt!=0 && ans[cnt-1]!=(*it).second){
   p=*it;
  }
  else{
   if(s.size()!=1){
    --it;
    p=(*it);
   }
   else
    p=(*it);
  }
  ans.push_back(p.second);
  s.erase(p);
  if(p.first>1)
   s.insert(make_pair(p.first-1,p.second));
  ++cnt;
 
 }
 for(auto c:ans)
  cout<<c;
 cout<<endl;
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
cout.flush();
 int t;cin>>t;
 cout.flush();
 while(t--){
  solve();
 }
 
    return 0;
}
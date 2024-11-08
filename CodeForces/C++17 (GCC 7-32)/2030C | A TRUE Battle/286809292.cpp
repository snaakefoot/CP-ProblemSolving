  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
 int n,nb1=0,nb0=0;cin>>n;
 string ch;cin>>ch;
 if(ch[0]=='1' || ch[n-1]=='1'){
  cout<<"YES"<<endl;
  return;
 }
 vector<int> len;
 vector<int> zone;
 bool test=false;
 int i=1,cnt=0;
 while(i<n){
  if(ch[i]=='0')
   ++i;
  else{
   int j=i+1;
   while(ch[j]=='1')
    ++j;
   len.push_back(j-i);
   zone.push_back(min(i,n-j));
   if(len[cnt]>=2){
    test=true;
   }
   ++cnt;
   i=j;
  }
 }
 if(test)
  cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;
 
 
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t;cin>>t;
 
 while(t--){
  solve();
 }
 
    return 0;
}
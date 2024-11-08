  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
 int n,ans=0;cin>>n;
 char a[n];
 bool test=true;
 for(int i=0;i<n;++i){
  cin>>a[i];
 }
 int c=0;
 while(c<n && a[c]=='1')
  ++c;
 if(c==n){
  if(n==4)
  cout<<"Yes"<<endl;
  else
   cout<<"No"<<endl;
  return;
 }
 c--;
 
 if(2*c>=n || n%c!=0 || n/c!=c){
  cout<<"No"<<endl;
  return;
 }
 for(int i=c;i<n-c;i+=c){
  if(a[i]!='1' || a[i+c-1]!='1')
   test=false;
  
  for(int j=i+1;j<i+c-1;++j)
   if(a[j]!='0'){
    test=false;
    
   }
 }
 
 
 
 if(test){
  cout<<"Yes"<<endl;
 }
 else{
  cout<<"No"<<endl;
 }
 
 
 
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
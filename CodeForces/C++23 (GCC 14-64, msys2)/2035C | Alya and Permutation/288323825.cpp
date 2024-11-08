  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
 int n;cin>>n;
 if(n==6){
  cout<<7<<endl;
  cout<<"1 2 4 6 5 3"<<endl;
  return;
 }
 if(n%2==1){
  cout<<n<<endl;
  cout<<2<<' ';
  for(int i=4;i<n-1;++i)
   cout<<i<<" ";
  cout<<1<<' '<<3<<' '<<n-1<<' '<<n<<endl;
 }
 else{
  int x=n,pot=1,ans;
  while(x){
   if((x&1))
    ans=pot;
   x>>=1;
   pot<<=1;
  }
  ans--;
  cout<<((ans)|(n))<<endl;
  cout<<2<<' ';
  for(int i=4;i<n;++i)
   if(i!=ans && i!=ans-1)
    cout<<i<<' ';
  cout<<1<<' '<<3<<' '<<ans-1<<' '<<ans<<' '<<n<<endl;
  
 }
 
 
 
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
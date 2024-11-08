  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=1<<18;
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t;cin>>t;
 
 while(t--){
      int n;cin>>n;
 int a[n];
 int mx=-1,mn=mod;
 for(int i=0;i<n;++i){
  cin>>a[i];
  mn=min(mn,a[i]);
  mx=max(mx,a[i]);
 }
 cout<<(mx-mn)*(n-1)<<endl;
 }
 
    return 0;
}
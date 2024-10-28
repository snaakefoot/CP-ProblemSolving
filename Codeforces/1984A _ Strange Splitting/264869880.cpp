#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  int n,x=-1;cin>>n;
  int a[n];
  int b[n];
  map<int,int> m;
  for(int i=0;i<n;++i){
   cin>>a[i];
   m[a[i]]++;
   if(m[a[i]]>1){
    x=a[i];
   }
   b[i]=a[i];
  }
  sort(a,a+n);
  if(a[n-1]==a[0]){
   cout<<"NO"<<endl;
   return;
  }
  cout<<"Yes"<<endl;
  if(x==-1)
   x=a[0];
  for(int i=0;i<n;++i){
   
   if(b[i]==x){
    cout<<'B';
    x=-1;
   }
   else{
    cout<<'R';
   }
  }
  
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
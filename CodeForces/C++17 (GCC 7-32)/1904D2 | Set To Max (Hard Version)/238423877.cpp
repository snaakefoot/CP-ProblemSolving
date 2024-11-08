#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int MAXN=2*1e5+1;
int n, t[4*MAXN];
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] =max( t[v*2] ,t[v*2+1]);
    }
}
int query(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return -1;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return max( query(v*2, tl, tm, l, min(r, tm))
           , query(v*2+1, tm+1, tr, max(l, tm+1), r) );
}
void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] =max( t[v*2] , t[v*2+1]);
    }
}
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 
 while(t--){
  cin>>n;
  int a[n];
  int b[n];
  vector<int> occ[n];
  set<pair<int,int> > done;
  vector<pair<int,int> > seq[n]; 
  for(int i=0;i<n;++i){
   cin>>a[i];
   occ[a[i]-1].push_back(i);
  }
  build(a,1,0,n-1);
  for(int i=0;i<n;++i){
   cin>>b[i];
  }
  int i=0,j=0;
  while(i<n){
   j=i+1;
   while(j<n && b[j]==b[i])
    ++j;
   seq[b[i]-1].push_back(make_pair(i,j-1));
   i=j;
  }
  bool test=true;
  for( int k=0;k<n;++k){
   auto v=occ[k];
   for (auto p: seq[k]){
    i=p.first;j=p.second;
    auto it=lower_bound(v.begin(),v.end(),i);
    auto it2=done.lower_bound(make_pair(i,-1)),it3=it2;
    
    if(it== v.end() || query(1,0,n-1,i,max(*it,j))!=k+1 || (it2!=done.end() && (it3->first)<=max(*it,j)) ){
     
 
     
     if(it==v.begin())
      test=false;
     else{
      it--;
     
      if(query(1,0,n-1,*it,j)!=k+1)
       test=false;  
      
      else{
       if((it2!=done.begin())){
        it3--;
        if( (it3->second)>=*it )
         test=false;
        else
         done.insert(p);
       }
       else
        done.insert(p);
       
      }
     }
    }
    else{
     done.insert(p);
     
    }
   }
  }
  if(test)
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
  
 }
    return 0;
}
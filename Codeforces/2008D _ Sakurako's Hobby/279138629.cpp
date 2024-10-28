  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=1<<18;
string ch;
 
class disjointSets{
 int parent[MAXN];
 int sz[MAXN];
 int nbr;
public:
 disjointSets(int n):nbr(n){
  for(int i=0u;i<n;++i){
   parent[i]=i;
   if(ch[i-1]=='0')
    sz[i]=1u;
   else
    sz[i]=0u;
  }
 }
 
 int finds(int v){
  return parent[v]==v?v:parent[v]=finds(parent[v]);
 }
 
 bool merge(int a, int b){
 
  a=finds(a);
  b=finds(b);
 
  if(a!=b){
   if(sz[a]>sz[b]) swap(a,b);
   parent[a]=b;
   sz[b]+=sz[a];
   sz[a]=0u;
   --nbr;
   return true;
  }
  return false;
 }
 
 int sizeOfSets(int v){
  return sz[finds(v)];
 }
 
 bool sameSet(int a, int b){
  return finds(a)==finds(b);
 }
 
 int nbrOfSets(){
  return nbr;
 }
};
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t;cin>>t;
 
 while(t--){
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
   
  }
  cin>>ch;
  disjointSets d=disjointSets(n+1);
  for(int i=0;i<n;++i){
   
   d.merge(i+1,a[i]);
  }
  for(int i=1;i<n+1;++i)
   cout<<d.sizeOfSets(i)<<' ';
  cout<<endl;
 }
 
    return 0;
}
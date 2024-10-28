#include <bits/stdc++.h>
#define ll long long
#define ld long double
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
 
ll solution1(ll c, ll h ,ll t){
   double d2 = 0, d3 = 0 ;
   double i =1,  mini = 100000000;
   ll result= 0;
      for ( i ; i< 1000;i += 2){
    d3 =  (i-1)/2 * (c+h) +  h;
    d3 /= i ;
    if (fabs (d3 - t) < fabs(d2 - t)){
      mini = fabs (d3 - t);
      result = i;}
    d2 = d3 ;
   }
   if (fabs (d3 - t) >  fabs( (double ( c+h) /2 - t))){
   result = 2;}
return result;}
 
ll solution2 (ll c, ll h ,ll t){
 ll ans=2,p1=0,p2=1;
   if(h==t){
    /*cout<<1<<endl;*/
    return 1;
   }
   if((2.*t-h-c)>0){
    p1=(h-t)/(2*t-h-c);
    p2=(h-t)/(2*t-h-c)+1;
   }
    else  return 2;
   long double res=fabs((1.*t)-(1.*(h+c))/2.);
   ll m1=2*p1+1,m2=2*p2+1;
  
   if(res>(fabs((ld)t-((ld)((ld)p1*(ld)(h+c)+(ld)h))/((ld)m1)))){
    res=(fabs((ld)t-((ld)(p1*(h+c)+(ld)h))/((ld)m1)));
    ans=m1;
   }
   if(res>(fabs((ld)t-((ld)((ld)p2*(ld)(h+c)+(ld)h))/((ld)m2)))){
    res=(fabs((ld)t-((ld)((ld)p2*(ld)(h+c)+(ld)h))/((ld)m2)));
    ans=m2;
   }
return ans;}
 
 
 
void solve() {
   ll c,h,t;cin>>h>>c>>t;
   
   
   /*cout<<ans<<endl;
   
   for(int i=1;i< 1000;++i){
    for(int j=i;j< 1000;++j){
     for(int k=j;k< 1000;++k){
      int p1 = solution1(i,k,j);
      int p2 = solution2(i,k,j);
      if (p1 != p2) {
      cout <<  p1 <<" "<< p2 << " "<< i <<" "<< k <<" "<< j<<endl; }
      
     }
    }
   }*/
   cout << solution2(c,h,t)<<endl;
   
      
      
 
    
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
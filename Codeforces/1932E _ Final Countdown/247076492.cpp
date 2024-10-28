#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
 
string addBigNumbers(string number1, string number2) {
   if (number1.length() > number2.length())
    swap(number1, number2);
   string sum = "";
   int len1 = number1.length();
   int len2 = number2.length();
   int digitDiff = len2 - len1;
   int carry = 0;
   int intSum;
   for (int i=len1-1; i>=0; i--) {
      intSum = ((number1[i]-'0') + (number2[i+digitDiff]- '0') + carry);
      sum.push_back(intSum%10 + '0');
      carry = intSum/10;
   }
   for (int i=digitDiff-1; i>=0; i--) {
      intSum = ((number2[i]-'0')+carry);
      sum.push_back(intSum%10 + '0');
      carry = intSum/10;
   }
   if (carry)
    sum.push_back(carry+'0');
   reverse(sum.begin(), sum.end());
   return sum;
}
 
 
 
void solve() {
 int n;cin>>n;
 string ch;cin>>ch;
 string ans=ch;
 ll suff[n];
 ll s;
 suff[n-1]=ch[n-1]-'0';
 for(int i=n-2;i>=0;--i){
  suff[i]=suff[i+1]+ch[i]-'0';
  
 }
 s=suff[0];
 ll add[n];
 add[0]=suff[0];
 for(int i=1;i<n;++i){
  add[i]=suff[0]-suff[n-i];
  
 
 }
 for(int i=0;i<n-1;++i){
  
  add[i+1]+=add[i]/10;
  add[i]=add[i]%10;
 }
 int j=n-1;
 while(j>=0 &&add[j]==0)
  --j;
 for(int i=j;i>=0;--i)
  cout<<add[i];
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
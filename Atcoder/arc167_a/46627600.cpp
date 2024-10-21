#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:200000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
typedef long long int ll;

ll mod=1000000007;

 long long power(long long x, long long y, long long m = mod) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}



int main(){
		//freopen("back_in_black_chapter_1_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	FAST;
	ll  n,x,m,ans=0;cin>>n>>m;
	ll a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
		ans+=a[i]*a[i];
	}
	
	sort(a,a+n);
	
	
	for(int i=0;i<n-m;++i){
		ans+=2*a[i]*a[2*(n-m)-1-i];
	}
	
	cout<<ans<<endl;
}
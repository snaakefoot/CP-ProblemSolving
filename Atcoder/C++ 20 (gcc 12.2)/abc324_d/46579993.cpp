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
	ll n,x,ans=0;cin>>n;
	int freq[10];
	int freq2[10];
	char c;
	bool test;
	for(int i=0;i<10;++i)
		freq[i]=0;
	for(int i=0;i<n;++i){
		cin>>c;
		freq[c-'0']++;
	}
	for(ll i=0;i<1e7;++i){
		x=i*i;
		for(int j=0;j<10;++j)
			freq2[j]=freq[j];
		for(int j=0;j<n;++j){
			freq2[x%10]--;
			x/=10;
		}
		if(x!=0)
			continue;
		test=true;
		for(int j=0;j<10;++j)
			if(freq2[j]!=0)
				test=false;
		if(test){++ans;
		}
	}
	cout<<ans<<endl;
}
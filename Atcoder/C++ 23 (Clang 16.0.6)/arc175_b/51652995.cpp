
#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=998244353;


void solve() {
	ll n,a,b,ans=0;cin>>n>>a>>b;
	string ch;cin>>ch;
	int pref=0;
	for(int i=0;i<2*n;++i){
		pref+=(ch[i]=='(')-(ch[i]==')');
	}
	int i;

	if(pref>0){
		 i=2*n-1;
		while(pref>0){
			if(ch[i]=='('){
				pref-=2;
				ans+=b;
				ch[i]=')';
			}
			--i;
		}
	}
	else
		if(pref<0){
			i=0;
			
			while(pref<0){
				if(ch[i]==')'){
					pref+=2;
					ans+=b;
					ch[i]='(';
				}
				++i;
			}
		}
	a=min(a,2*b);
	int mn=0;
	pref=0;
	for(int i=0;i<2*n;++i){
		pref+=(ch[i]=='(')-(ch[i]==')');
		mn=min(mn,pref);
	}

	mn*=-1;
	ans+=((ll)((mn+1)/2))*a;
	cout<<ans<<endl;
	
}


int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	FAST;
	solve();
	
    return 0;
}

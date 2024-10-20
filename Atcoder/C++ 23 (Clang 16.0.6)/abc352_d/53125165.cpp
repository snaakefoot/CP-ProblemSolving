#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
int n, t[4*MAXN],t2[4*MAXN];
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



void build2(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t2[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build2(a, v*2, tl, tm);
        build2(a, v*2+1, tm+1, tr);
        t2[v] =min( t2[v*2] ,t2[v*2+1]);
    }
}
int query2(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return mod;
    if (l == tl && r == tr) {
        return t2[v];
    }
    int tm = (tl + tr) / 2;
    return min( query2(v*2, tl, tm, l, min(r, tm))
           , query2(v*2+1, tm+1, tr, max(l, tm+1), r) );
}

void solve() {
		int k;cin>>n>>k;

		int p[n];
		int pos[n];
		for(int i=0;i<n;++i){
			cin>>p[i];
			pos[p[i]-1]=i;
			p[i]--;
		}
		if(k==1){
			cout<<0<<endl;
			return ;
		}
		build(pos,1,0,n-1);
		build2(pos,1,0,n-1);
		int ans=1e9;
		for(int i=n-1;i>=0;--i){
			if(p[i]+k-1<n){
				ans=min(ans,query(1,0,n-1,p[i],p[i]+k-1)-query2(1,0,n-1,p[i],p[i]+k-1));
			}
		}
		cout<<ans<<endl;


}
 
 
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
 
	FAST;
	int t=1;
	while(t--){
		solve();
	}
	
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
double squaredDistance(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

void solve() {
		int xa,xb,ya,yb,xc,yc;cin>>xa>>ya>>xb>>yb>>xc>>yc;
		    double d1 = squaredDistance(xa, ya, xb, yb); // distance squared between (xa, ya) and (xb, yb)
    double d2 = squaredDistance(xb, yb, xc, yc); // distance squared between (xb, yb) and (xc, yc)
    double d3 = squaredDistance(xc, yc, xa, ya); // distance squared between (xc, yc) and (xa, ya)
    
    // Check if any combination of squared distances satisfies the Pythagorean theorem
    if ((d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
		
		
		
		
 
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
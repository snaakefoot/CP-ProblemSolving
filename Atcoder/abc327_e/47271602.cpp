#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;

 long long power(long long x, long long y, long long m=1 ) {
    ll res=1 ;
    x = x;
    while(y)
    {
        if(y&1) res=(res * x) ;
 
        y = y >> 1;
        x = (x * x) ;
    }
    return res;
}
int main(){
		//freopen("two_apples_a_day_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t=1;
	while(t--){
		int n;cin>>n;
		double q[n];
		double dp[n][n+2];
		double inf=1e9*-1;
		for(int i=0;i<n;++i)
			cin>>q[i];
		for(int i=0;i<n;++i){
			for(int k=0;k<=i+1;++k){
				if(k==0)
					dp[i][k]=0;
				else
					if(i==0)
						dp[i][k]=q[i];
					else{
						if(i>=k)
						dp[i][k]=max(0.9*dp[i-1][k-1]+q[i],dp[i-1][k]);
						else
							dp[i][k]=0.9*dp[i-1][k-1]+q[i];
						
					}
			}
		}
		double b[n];
		b[0]=1;
		for(int i=1;i<n;++i){
			b[i]=0.9*b[i-1]+1;
		}
		double ans=inf;
		for(int k=1;k<=n;++k){
			ans=max(ans,dp[n-1][k]/b[k-1]-(1200*1.)/(sqrt(k)));
		}
		std::cout << std::setprecision(9);
		 std::cout << std::fixed;
		cout<<ans<<endl;
	}
    return 0;
}
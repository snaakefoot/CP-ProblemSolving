#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:2000000")
 
typedef long long int  ll;
 
using namespace std;
const size_t MAXN=1<<18;
const int N=1e6;
int  mod=1e9+7;
ll dp[MAXN];



int main(void){
	ios::sync_with_stdio(false);  cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	
		int n=8;
		int a[n];
		bool test =true;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(a[i]%25!=0)
				test=false;
			if(a[i]<100 ||a[i]>675 )
				test=false;
			
		}
		
		for(int i=1;i<n;++i)
			if(a[i]<a[i-1])
				test=false;
		if(test)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
	
	
	return 0;	
}
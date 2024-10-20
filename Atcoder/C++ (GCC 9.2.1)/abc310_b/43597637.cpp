#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:2000000")
 
typedef long long int  ll;
 
using namespace std;
const size_t MAXN=1<<18;
const int N=1e6;
ll  mod=1e9+7;

int main(void){
	ios::sync_with_stdio(false);  cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t=1;
	while(t--){
		int n,m,c,f;cin>>n>>m;
		bool fun[n][m];
		int price[n];
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				fun[i][j]=false;
			}
		}
		for(int i=0;i<n;++i){
			cin>>price[i];
			cin>>c;
			for(int j=0;j<c;++j){
				cin>>f;
				fun[i][f-1]=true;
			}			
		}
		bool ans=false;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				bool test=true,add=false;
				for(int k=0;k<m;++k){
					if(fun[i][k] && !fun[j][k]){
						test=false;
						break;
					}
					if(!fun[i][k] && fun[j][k])
						add=true;
				}
				if((test && add && price[i]>=price[j]) || (test  && price[i]>price[j]))
					ans=true;
				if(ans)
					break;
			}
			if(ans)
				break;
		}
		if(ans)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	
	return 0;	
}
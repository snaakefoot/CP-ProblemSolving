#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:20000000")
using namespace std;

 
int main(){
		//freopen("two_apples_a_day_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,m,cnt;cin>>n>>m;
	char a[n][m];
	int player[n];
	int diff[m];
	for(int j=0;j<m;j++){
		cin>>diff[j];
	}
	int mx=-1;
	vector<int> v[n];
	for(int i=0;i<n;i++){
		player[i]=0;
	
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]=='o'){
				player[i]+=diff[j];
				
			}
			else
				v[i].push_back(diff[j]);
			
		}
		
		player[i]+=i+1;
		mx=max(mx,player[i]);
		sort(v[i].begin(),v[i].end());
	}
	for(int i=0;i<n;i++){
		int j=v[i].size()-1,ans=0;
		
		while(player[i]<mx){

			player[i]+=v[i][j];
			
			--j;
			++ans;
		}
		cout<<ans<<endl;
	}
}
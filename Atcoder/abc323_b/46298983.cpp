#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:20000000")
using namespace std;

 
int main(){
		//freopen("two_apples_a_day_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;cin>>n;
	char a[n][n];
	int player[n];
	for(int i=0;i<n;i++){
		player[i]=0;
		for(int j=0;j<n;j++){
			cin>>a[i][j];
	}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i][j]=='o')
				player[i]++;
			else
				player[j]++;
	}
	}
	vector<pair<int,int> > v;
	
	for(int i=0;i<n;i++){
		v.push_back(make_pair(player[i],-1*i));
	}
	sort(v.begin(),v.end());
	for(int i=n-1;i>=0;i--)
		cout<<-1*v[i].second+1<<' ';
	cout<<endl;
}
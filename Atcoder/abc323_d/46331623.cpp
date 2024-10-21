#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:20000000")
using namespace std;

 
int main(){
		//freopen("two_apples_a_day_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,s,c;cin>>n;
	map<long long int,long long int> m;
	int ss[n];
	for(int i=0;i<n;i++){
		
		cin>>s>>c;
		ss[i]=s;
		m[s]=c;
		
	}
	int ans=0;
	for(auto it=m.begin();it!=m.end();it++){
		if((((*(it)).second)&1))
			++ans;
		if((((*(it)).second)/2!=0)){
			m[((*(it)).first)*2]+=((*(it)).second)/2;
			
		}
	}
	cout<<ans<<endl;
}
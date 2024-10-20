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
		int n,m;cin>>n>>m;
		int a[m];
		int b[m];
		vector<int> adj[n];
		for(int i=0;i<m;++i){
			cin>>a[i];
		}
		for(int i=0;i<m;++i){
			cin>>b[i];
			adj[a[i]-1].push_back(b[i]-1);
			adj[b[i]-1].push_back(a[i]-1);
		}
		bool test=true;
		bool visited[n];
		int color[n];
		for(int i=0;i<n;++i){
			visited[i]=false;
			color[i]=-1;
		}
		for(int i=0;i<n;++i){
			if(!visited[i]){
				stack<pair<int,int> >s;
				s.push(make_pair(i,1));
				while(!s.empty()){
					auto p=s.top();
					s.pop();
					int u=p.first,c=p.second;
					if(visited[u]){
						if(color[u]!=c){
							test=false;
							break;
						}
					}
					else{
						visited[u]=true;
						color[u]=c;
						c=1-c;
						for(auto v:adj[u]){
							s.push(make_pair(v,c));
						}
					}
				}
			}
		}
		if(test)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
}
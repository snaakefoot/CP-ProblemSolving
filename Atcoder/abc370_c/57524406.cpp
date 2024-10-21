  #include<bits/stdc++.h>

using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=1<<18;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string s,t;cin>>s>>t;
	int n=s.size();
	vector<string> ans;
	vector<int> smaller;
	vector<int> bigger;
	for(int i=0;i<n;++i){
		if(s[i]!=t[i]){
			if(s[i]>t[i])
				smaller.push_back(i);
			else
				bigger.push_back(i);
		}
	}
	for(int u:smaller){
		s[u]=t[u];
		ans.push_back(s);
	}
	for(int i=bigger.size()-1;i>=0;--i){
				s[bigger[i]]=t[bigger[i]];
		ans.push_back(s);
	}
	cout<<ans.size()<<endl;
	for(auto u:ans)
		cout<<u<<endl;
	
    return 0;
}
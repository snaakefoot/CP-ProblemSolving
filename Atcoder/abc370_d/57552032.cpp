  #include<bits/stdc++.h>

using namespace std;
using ll =  long long;
const ll mod=1e9+7;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int h,w,q;cin>>h>>w>>q;
    vector<set<int>> rows(h);
    vector<set<int>> colums(w);

    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            rows[i].insert(j);
            colums[j].insert(i);
        }
    }
	int r,c;
	while(q--){
		cin>>r>>c;--r;--c;
		if(rows[r].find(c)!=rows[r].end()){
			rows[r].erase(c);
			colums[c].erase(r);
	
		}
		else{
			auto it=rows[r].upper_bound(c);
			if(it!=rows[r].end()){
				int cto=*it;
				rows[r].erase(cto);
				colums[cto].erase(r);
			}
			it=rows[r].upper_bound(c);
			if(!rows[r].empty() && it!=rows[r].begin() ){
				--it;
				int cto=*it;
				rows[r].erase(cto);
				colums[cto].erase(r);
			}
			
			it=colums[c].upper_bound(r);
			if(it!=colums[c].end()){
				int cto=*it;
				colums[c].erase(cto);
				rows[cto].erase(c);
			}
			it=colums[c].upper_bound(r);
			if(!colums[c].empty()  && it!=colums[c].begin()  ){
				--it;
				int cto=*it;
				colums[c].erase(cto);
				rows[cto].erase(c);
			}
		}
	
	}
	int ans=0;
	for(int i=0;i<h;++i){
		ans+=rows[i].size();
	}
	cout<<ans<<endl;
    return 0;
}
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
		int n,l,nbp=0,ans=0;cin>>n;
		string ch,ch1;
		set<string> s;
		bool pal;
		for(int i=0;i<n;++i){
			cin>>ch;
			ch1=ch;
			l=ch.length();
			pal=true;
			for(int j=0;j<l;++j){
				if(ch[j]!=ch[l-1-j])
					pal=false;
				ch1[j]=ch[l-1-j];
				
			}
			if(s.find(ch)==s.end() && s.find(ch1)==s.end() ){
				++ans;
				s.insert(ch);
			}
			
		}
		
		cout<<ans<<endl;
	}
	
	return 0;	
}
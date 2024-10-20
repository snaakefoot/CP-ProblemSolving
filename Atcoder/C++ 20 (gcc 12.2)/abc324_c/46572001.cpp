#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:200000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
typedef long long int ll;

ll mod=1000000007;

 long long power(long long x, long long y, long long m = mod) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}



int main(){
		//freopen("back_in_black_chapter_1_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	FAST;
	int n,x;cin>>n;
	string ch,ch1,ch2;cin>>ch;
	int l=ch.length(),l1,l2;
	vector<int> ans;
	bool mistake,test;
	for(int i=0;i<n;++i){
		cin>>ch1;
		mistake=true;
		test=true;
		l2=ch.length();
		l1=ch1.length();
		
		if(l1==l2){
			ch2=ch;
			for(int i=0;i<l1;++i){
				if(ch1[i]!=ch2[i] && mistake)
					mistake=false;
				else
					if(ch1[i]!=ch2[i])
						test=false;
			}
		}
		else{
			if(abs(l1-l2)==1){
			if(l1<l2){
				ch2=ch1;
				ch1=ch;
				x=l1;
				l1=l2;
				l2=x;
			}
			else{
				ch2=ch;
			}
			int i=0,j=0;
			if(l1==l2+1){
			while(i<l1){
				if(j>=l2){
					test=true;
					break;
				}
				if(ch1[i]!=ch2[j] && mistake){
					mistake=false;
					++i;
				}
				else{
					if(ch1[i]!=ch2[j] ){
						test=false;
						break;
					}
					++i;
					++j;
				}
			}
			}
			
		}
		else
				test=false;
		}
		if(test)
			ans.push_back(i+1);
	}
	cout<<ans.size()<<endl;
	for(int u:ans)
		cout<<u<<' ';
	cout<<endl;
}
#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;

		
void solve() {
		string ch1,ch2;
		int i=0,j=0;
		cin>>ch1>>ch2;
		int n1=ch1.length(),n2=ch2.length();
		while(i<n1 && j<n2){
			if(ch1[i]==ch2[j]){
				++i;
				++j;
				cout<<j<<' ';
			}
			else{
				++j;
			}
		}
		cout<<endl;


}
 
 
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
 
	FAST;
	int t=1;
	while(t--){
		solve();
	}
	
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;

 
int main(){
		//freopen("two_apples_a_day_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t=1;
	while(t--){
		int n;cin>>n;
		string ch;cin>>ch;
		bool test=false;
		for(int i=1;i<n;++i){
			if(ch[i]=='a' && ch[i-1]=='b')
				test=true;
			if(ch[i]=='b' && ch[i-1]=='a')
				test=true;
		}
		if(test)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
}
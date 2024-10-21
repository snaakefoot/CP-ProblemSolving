  #include<bits/stdc++.h>

using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=1<<18;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int l,r;cin>>l>>r;
	if(l+r>=2 || r+l==0)
		cout<<"Invalid"<<endl;
	else
		if(l==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	
	
	
    return 0;
}
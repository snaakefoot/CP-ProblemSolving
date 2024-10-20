#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:20000000")
using namespace std;

 
int main(){
		//freopen("two_apples_a_day_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string ch;cin>>ch;
	bool test=true;
	for(int i=2;i<=16;i+=2)
		if(ch[i-1]!='0')
			test=false;
		if(test)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
}
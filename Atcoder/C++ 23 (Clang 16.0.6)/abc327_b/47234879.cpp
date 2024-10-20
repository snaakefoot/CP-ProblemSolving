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
		unsigned long long int b,a=1;cin>>b;
		while(a<16){
			if(power(a,a)==b)
				break;
			++a;
		}
		if(power(a,a)==b)
				cout<<a<<endl;
			else
				cout<<-1<<endl;
	}
    return 0;
}
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
		int a[9][9];
		for(int i=0;i<9;++i){
			for(int j=0;j<9;++j)
				cin>>a[i][j];
			
		}
		bool test=true;
		for(int i=0;i<9;++i){
			set<int> s;
			for(int j=0;j<9;++j)
				s.insert(a[i][j]);
			if(s.size()!=9)
				test=false;
			
		}
		for(int j=0;j<9;++j){
			set<int> s;
			for(int i=0;i<9;++i)
				s.insert(a[i][j]);
			if(s.size()!=9)
				test=false;
			
		}
		for(int i=0;i<9;i+=3){
			for(int j=0;j<9;j+=3){
				set<int> s;
				for(int ki=i;ki<i+3;++ki)
					for(int kj=j;kj<j+3;++kj)
						s.insert(a[ki][kj]);
				if(s.size()!=9)
				test=false;
			}
		}
		if(test)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
}
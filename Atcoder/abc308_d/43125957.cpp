#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:2000000")
 
typedef long long int  ll;
 
using namespace std;
const size_t MAXN=1<<18;
const int N=1e6;
int  mod=1e9+7;
char m[500][500];
bool visited[500][500];
int h,w;
string ch="snuke";
int dx[4]={1,0,0,-1};
int dy[4]={0,1,-1,0};
bool next(int i,int j , int& x,int& y,int k){
	x=i+dx[k];
	y=j+dy[k];
	int p=ch.find(m[i][j]);
	return x>=0 && y>=0 && x<h && y<w && m[x][y]==ch[(p+1)%5];
}

bool dfs(int i,int j){
	visited[i][j]=true;
	if(i==h-1 && j==w-1)
		return true;
	int x,y;
	bool ans=false;
	for(int k=0;k<4;++k){
		if(next(i,j,x,y,k) && !visited[x][y]){
		
			ans|=dfs(x,y);
		}
	}
	return ans;
}
int main(void){
	ios::sync_with_stdio(false);  cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>h>>w;
	for(int i=0;i<h;++i)
		for(int j=0;j<w;++j){
			cin>>m[i][j];
			visited[i][j]=false;
		}
	if(m[0][0]=='s' && dfs(0,0))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;	
}
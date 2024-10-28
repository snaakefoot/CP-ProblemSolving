#include <bits/stdc++.h>



using namespace std;
const int INF = 1e9;
void solve(){
 int n ;
 cin >>n ;
 int t[n][n];
 for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
        t[i][j] =0;
    }
 }
 for(int i=0;i<n;++i){
        for(int j =0;j<n;++j){
            cin >> t[i][j];}
 }
  int dist[n];
  bool visited[n];
  priority_queue<pair<int,int>> q;
  int src;
  cin >>src;
  for(int i=0;i<n;++i){
    dist[i] =INF;
    visited[i] = false;
  }
  dist[src] = 0;
  q.push({0,src});
   while(! q.empty()){
    int a = q.top().second ; q. pop();
    if (visited[a]) continue ;
    visited[a] = true;
    for(int i=0;i<n;++i){
        if (t[a][i] != 0 && dist[a] < dist[i]+1){
            dist[i]= dist[a]+1;
            q.push({-dist[i], i});

        }
    }
  }


  for(int i=0;i<n;++i){cout << dist[i] <<" ";}

}
int main()
{
    solve();
    return 0;
}

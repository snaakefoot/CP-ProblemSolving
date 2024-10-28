#include <bits/stdc++.h>



using namespace std;
const int INF = 1e9;

void solve(){
 int n,m;
 cin >>n>>m;
 vector<tuple<int,int,int>> edges;
 for(int i=0;i<m;++i){
    int u ,v,w;
    cin >> u>>v>>w;
    edges.push_back(make_tuple(u,v,w));
    edges.push_back(make_tuple(v,u,w));
 }
 int dist[n];
 for(int i=0;i<n;++i){
    dist[i]= INF;
 }
 int src;cin >>src;
 dist[src] =0;
 for(int i=0;i<n;++i){
    for(auto u :edges){
        int a,b,w;
        tie(a,b,w) = u;
        dist[b] = min(dist[b], dist[a]+w);
    }
 }
 for(int i=0;i<n;++i){
    cout <<dist[i]<<" ";
 }
 }


int main()
{
    solve();
    return 0;
}

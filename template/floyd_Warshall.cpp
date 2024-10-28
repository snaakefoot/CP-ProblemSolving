#include <bits/stdc++.h>



using namespace std;
const int INF = 1e9;

void solve(){
 int n,m;
 cin >>n;
 int adj[n][n];
 for(int i=0;i<n;++i){
    for(int j =0;j<n;++j){
        cin >>adj[i][j];
    }
 }
 int  dist[n][n];
 for(int i=0;i<n;++i){
    for(int j=i;j<n;++j){
        if (i==j) dist[i][j] = 0;
        if (adj[i][j]) {dist[i][j] = adj[i][j]; }
        else {
            dist[i][j] = INF;
        }
        dist[j][i] = dist[i][j];
    }
 }
 for(int k=0;k<n;++k){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            dist[i][j] = min(dist[i][j] , dist[i][k] + dist[k][j]);
        }
    }
 }


 for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
        cout << dist[i][j]<< " ";
    }cout <<endl ;
 }
 }


int main()
{
    solve();
    return 0;
}

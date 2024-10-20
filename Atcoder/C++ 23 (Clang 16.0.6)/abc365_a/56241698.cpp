#include<bits/stdc++.h>
#include <climits>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;

typedef pair<int, ll> pii;

void dijkstra(int N, int source, vector<vector<pii>>& adj,ll x) {
    vector<ll> dist(N + 1, 1e15); // Distance from source to each vertex
    dist[source] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap priority queue
    pq.push({0, source}); // {distance, vertex}

    while (!pq.empty()) {
        int u = pq.top().second;
        ll d = pq.top().first;
        pq.pop();

        if (d > dist[u]) {
            continue;
        }
		
        for (const auto& edge : adj[u]) {
            int v = edge.first;
            ll weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 2; i <= N; ++i) {
        
            cout <<  dist[i]+x << ' ';
        
    }
}

void solve() {
		int N,M;
		  cin >> N >> M;
 vector<int> weights(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> weights[i];
    }
		
			vector<vector<pii>> adj(N + 1);
		    for (int j = 0; j < M; ++j) {
        int U, V, B;
        cin >> U >> V >> B;
		
        adj[U].emplace_back(V, B+weights[V]);
        adj[V].emplace_back(U, B+weights[U]); // Since the graph is undirected
    }
		
		    int source = 1;
    dijkstra(N, source, adj,weights[1]);
		
		
		
 
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
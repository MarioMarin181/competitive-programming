#include <bits/stdc++.h>
#define INF -1

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int n;
vi dist;
vi pesos;
vector <vii> adjList;
vector<bool> control;

void dfs(int u) {
	control[u] = true;
	for(int i=0; i< adjList[u].size(); ++i) {
		ii v = adjList[u][i];
		if (!control[v.first])
			dfs(v.first);
	}
}

void BellmandFord() {
	dist[0] = 100;
	for(int i=0; i< n - 1; ++i) {
		for(int u=0; u<n; ++u) {
			if (dist[u] == INF) continue;
			for(int j=0;j< adjList[u].size(); ++j) {
				ii v = adjList[u][j];
				if (dist[u] + v.second <= 0) continue;
				dist[v.first] = max(dist[v.first], dist[u] + v.second);
			}
		}
	}

	for(int u=0; u<n; ++u) {
		if (dist[u] == INF) continue;
		for(int j=0;j< adjList[u].size(); ++j) {
			ii v = adjList[u][j];
			if (dist[u] + v.second <= 0) continue;
			if (!control[v.first] && dist[u] + v.second > dist[v.first])
				dfs(v.first);
		}
	}

}

int main() {
    //freopen("10557.txt", "r", stdin);
	while (scanf("%d", &n)) {
        if(n==-1) return 0;
        adjList.assign(n, vii());
        dist.assign(n, INF);
        control.assign(n, false);
		pesos.assign(n, 0);
		for(int i =0; i<n; ++i) {
			scanf("%d", &pesos[i]);
			int e;
			scanf("%d", &e);
			while (e--) {
				int aux;
				scanf("%d", &aux);
				adjList[i].emplace_back(aux-1, -1);
			}
		}
		for(int i =0; i<n; ++i)
			for(int j=0;j< adjList[i].size(); ++j)
				adjList[i][j].second = pesos[adjList[i][j].first];

		BellmandFord();
        if(dist[n-1] != INF || control[n-1]==true) printf("winnable\n");
        else printf("hopeless\n");

	}
	return 0;
}

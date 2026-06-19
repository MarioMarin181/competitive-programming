#include <bits/stdc++.h>

using namespace std;


typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
vector <vii> adjList;
vi dist;
vector <bool> control;
vi pesos;
const int INF = 1e9;
int n, e, a, b, w, q, cont=1;

void dfs(int u) {
	control[u] = true;
	for(int i=0; i< adjList[u].size(); ++i) {
		ii v = adjList[u][i];
		if (!control[v.first])
			dfs(v.first);
	}
}

void BellmandFord(){
    if (n==0) return;
    dist[0]=0;
    for (int i = 0; i < n-1; ++i) {
    bool modified = false;
    for (int u = 0; u < n; ++u)
      if (dist[u] != INF)
        for (auto e : adjList[u]) {
          if (dist[u]+e.second >= dist[e.first]) continue;
          dist[e.first] = max(-INF, dist[u]+e.second);
          modified = true;
        }
    if (!modified) break;
  }

  for (int u = 0; u < n; ++u)
    if (dist[u] != INF)
      for (auto e : adjList[u])
        if (dist[e.first] > dist[u]+e.second && !control[e.first])
            dfs(e.first);
}

int main(){
    //freopen("10449.txt", "r", stdin);
    while(cin>>n){
        //cout<<n<<endl;
        adjList.assign(n, vii());
        pesos.assign(n, 0);
        dist.assign(n, INF);
        control.assign(n, false);
        for(int i=0; i<n; i++){
            scanf("%d", &pesos[i]);
        }
        /*for(int i=0; i<pesos.size(); i++){
            cout<<"pesos[i]: "<<pesos[i]<<endl;
        }*/
        scanf("%d", &e);
        while(e--){
            scanf("%d %d", &a, &b);
            w = pesos[b-1]-pesos[a-1];
            w=w*w*w;
            adjList[a-1].emplace_back(b-1, w);
        }
        BellmandFord();
        printf("Set #%d\n", cont);
        scanf("%d",&q);
        while(q--){
            int aux;
            scanf("%d", &aux);
            if(control[aux-1] || dist[aux-1]<3 || dist[aux-1]==INF)
                printf("?\n");
            else printf("%d\n", dist[aux-1]);
        }
        cont++;
    }

return 0;
}

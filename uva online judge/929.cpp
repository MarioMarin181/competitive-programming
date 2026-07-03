#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
vector <vii> adjList;
vi dist;

void dijkstra(int s){
    dist[s]=0;
    priority_queue<ii, vii, greater <ii> > pq; pq.push(ii(0, s));
    while(!pq.empty()){
        ii front = pq.top(); pq.pop();
        int d = front.first, u = front.second;
        if (d > dist[u]) continue;
        for(int j = 0; j < adjList[u].size(); j++){
            ii v = adjList[u][j];
            if(dist[u]+v.second < dist[v.first]){
                dist[v.first] = dist[u] + v.second;
                pq.push(ii(dist[v.first], v.first));
            }
        }
    }
}

int main(){
    int m, r, c;
    scanf("%d", &m);
    while(m--){
        scanf("%d %d", &r, &c);
        int mat[r][c];
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                scanf("%d", &mat[i][j]);
            }
        }
        //creo adjList
        adjList.assign(r*c, vii());
        dist.assign(r*c, INF);
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                int a = (i*c)+j, b, w;
                //casillas en vertical
                if(i<r-1){
                    b=((i+1)*c)+j;
                    w=mat[i+1][j];
                    adjList[a].push_back(ii{b, w});
                }
                if(i>0){
                    b=((i-1)*c)+j;
                    w=mat[i-1][j];
                    adjList[a].push_back(ii{b, w});
                }
                //casillas horizontal
                if(j>0){
                    b=(i*c)+j-1;
                    w=mat[i][j-1];
                    adjList[a].push_back(ii{b, w});
                }
                if(j<c-1){
                   b=(i*c)+j+1;
                   w=mat[i][j+1];
                   adjList[a].push_back(ii{b, w});
                }

            }
        }

        dijkstra(0);
        printf("%d\n", dist[r*c-1]+mat[0][0]);
    }
return 0;
}

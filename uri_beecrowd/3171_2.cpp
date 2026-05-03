#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
vector <vi> adjList;
vi dist;

void BFS (){
    dist[0]=0;
    queue <int> q; q.push(0);
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v: adjList[u]){
            if(dist[v] !=-1) continue;
            dist[v] = dist[u]+1;
            q.push(v);
        }
    }
}
int main(){
    int n, l;
    cin>>n>>l;
    adjList.assign(n, vi(0));
    dist.assign(n, -1);
    while(l--){
        int a, b;
        cin>>a>>b;
        adjList[a-1].push_back(b-1);
        adjList[b-1].push_back(a-1);
    }
    BFS();
    for(int i=0; i<dist.size(); i++){
        if(dist[i]==-1){
            cout<<"INCOMPLETO\n";
            return 0;
        }
    }
    cout<<"COMPLETO\n";
    return 0;
}
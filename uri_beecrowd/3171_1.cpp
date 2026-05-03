#include<bits/stdc++.h>

using namespace std;
#define INF -1
typedef vector<int> vi;
vector <vi> adjList;
vi dist;
int n, e, s;
void BFS(){
    dist[s]=0;
    queue<int> q; q.push(s);
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v:adjList[u]){
            if(dist[v]!=INF) continue;
            dist[v]=dist[u]+1;
            q.push(v);
        }
    }

}

int main(){
    cin>>n>>e;
    adjList.assign(n, vi(0,0));
    dist.assign(n, INF);
    s=0;
    while(e--){
        int a, b;
        cin>>a>>b;
        adjList[a-1].push_back(b-1);
        adjList[b-1].push_back(a-1);
    }
    BFS();
    bool control=true;
    for(int i=0; i<dist.size() && control; i++){
        if(dist[i]==INF) control=false;
    }
    if(control) cout<<"COMPLETO\n";
    else cout<<"INCOMPLETO\n";


return 0;
}
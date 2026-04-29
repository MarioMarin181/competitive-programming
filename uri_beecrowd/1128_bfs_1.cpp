#include<bits/stdc++.h>

using namespace std;
#define INF -1

typedef vector<int> vi;
vector <vi> adjList;
vi dist;

void BFS(int s){
    dist[s]=0;
    queue<int> q; q.push(s);
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: adjList[u]){
            if(dist[v]!=INF) continue;
            dist[v]=dist[u]+1;
            q.push(v);
        }
    }
}

int main(){
    int n, e, a, b, p;
    while(cin>>n>>e && (n!=0 || e!=0)){
        //if(n==0 || e==0) cout<<"0\n";
        //else{
            adjList.assign(n, vi(0,0));
            while(e--){
                cin>>a>>b>>p;
                adjList[a-1].push_back(b-1);
                if(p==2) adjList[b-1].push_back(a-1);
            }
            bool control=true;
            for(int i=0; i<n && control; i++){
                //cout<<"i: "<<i<<endl;
                dist.assign(n, INF);
                BFS(i);
                for(int j=0; j<dist.size() && control; j++){
                    if(dist[j]==INF) control=false;
                }
            }
            if(control) cout<<"1\n";
            else cout<<"0\n";
        //}
    }


return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define VISITED 1
#define UNVISITED -1

typedef vector <int> vi;
vector <vi> adjList;
vi dfs_num;
int n, e, a, b, p, cont;
void dfs(int u){
    //cout<<"Visitando el nodo: "<<u<<endl;
    cont++;
    dfs_num[u] = VISITED;
    for(int j = 0; j<adjList[u].size(); j++){
        int v = adjList[u][j];
        if (dfs_num[v]==UNVISITED) dfs(v);
    }

}

int main(){
    while(cin>>n>>e && (n!=0 || e!=0)){
        if(n==0 || e==0) cout<<"0\n";
        else{
            adjList.assign(n, vi(0,0));
            while(e--){
                cin>>a>>b>>p;
                adjList[a-1].push_back(b-1);
                if(p==2) adjList[b-1].push_back(a-1);
            }
            bool control=true;
            for(int i=0; i<n && control; i++){
                cont=0;
                //cout<<"i: "<<i<<endl;
                dfs_num.assign(n, UNVISITED);
                dfs(i);
                if(cont!=n) control=false;

            }
            if(control) cout<<"1\n";
            else cout<<"0\n";
        }
    }



return 0;
}

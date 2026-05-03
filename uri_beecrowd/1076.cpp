#include <bits/stdc++.h>

using namespace std;

int t, n, v, a, cont, aux, aux2;
vector < vector<int> > g;
vector <bool> used;

void DFS (int nodo){
    used[nodo]=true;
    for(int i=0; i<(int)g[nodo].size(); i++){
        int x=g[nodo][i];
        if(!used[x]){
            cont++;
            DFS(x);
        }
    }
}

int main(){
    cin>>t;
    while(t--){
        cont=0;
        cin>>n>>v>>a;
        g.resize(v);
        //cout<<"n: "<<n<<" v: "<<v<<" a: "<<a<<endl;
        /*cout<<"GRAFO INICIAL: "<<endl;
        for(int i=0; i<g.size(); i++){
            for(int j=0; j<g[i].size(); j++){
                cout<<g[i][j];
            }
            cout<<endl;
        }*/
        used.resize(v, false);
        while(a--){
            cin>>aux>>aux2;
            g[aux].push_back(aux2);
            g[aux2].push_back(aux);
        }
        /*cout<<"GRAFO: "<<endl;
        for(int i=0; i<g.size(); i++){
            for(int j=0; j<g[i].size(); j++){
                cout<<g[i][j];
            }
            cout<<endl;
        }*/
        DFS(n);
        cout<<cont*2<<endl;
        g.clear();
        used.clear();
    }

return 0;
}
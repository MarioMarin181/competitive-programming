#include <bits/stdc++.h>

using namespace std;

#define VISITED 1
#define UNVISITED -1
typedef vector<int> vi;
typedef set<char> letras;
vector <vi> adjList;
vi dfs_num;
vector <letras> componentes;
int cont;
void dfs(int u){
    dfs_num[u]=VISITED;
    componentes[cont].insert((char)u+'a');
    for(int i=0; i< (int)adjList[u].size(); i++){
        int v = adjList[u][i];
        if(dfs_num[v]==UNVISITED) dfs(v);
    }
}

int main(){
    int c, n, e;
    scanf("%d", &c);
    for(int m=1; m<=c; m++){
        cont=0;
        scanf("%d %d", &n, &e);
        adjList.assign(n, vi());
        dfs_num.assign(n,UNVISITED);
        componentes.assign(0,letras());
        while(e--){
            cin.ignore();
           char a, b;
           scanf("%c %c", &a, &b);
           //printf("a: %c - b: %c", a, b);
           adjList[(int)a-'a'].push_back((int)b-'a');
           adjList[(int)b-'a'].push_back((int)a-'a');
        }
        for(int i=0; i<dfs_num.size(); i++){
            if(dfs_num[i]==UNVISITED){
                letras aux;
                componentes.push_back(aux);
                dfs(i);
                cont++;
            }
        }
        printf("Case #%d:\n", m);
        for(int i=0; i<componentes.size(); i++){
            letras aux = componentes[i];
            for(auto e: aux){
                printf("%c,", e);
            }
            printf("\n");
        }
        printf("%d connected components\n\n", componentes.size());

    }

return 0;
}

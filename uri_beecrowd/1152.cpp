#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
struct Edge{
    int origen;
    int destino;
    int peso;
    bool operator <(const Edge & other) const{
        return peso < other.peso;
    }
};
struct DS {
    vi padre;
    vi rango;
    DS(int tam) {
        padre.resize(tam);
        rango.resize(tam);
        for (int i = 0; i < tam; i++) {
            padre[i] = i;
            rango[i] = 0;
        }
    }
    int find(int a) {
        if (padre[a] != a) {
            padre[a] = find(padre[a]);
        }
        return padre[a];
    }
    void unionSets(int a, int b) {
        int raizA = find(a);
        int raizB = find(b);
        if (raizA != raizB) {
            if(rango[raizA]<rango[raizB]){
                padre[raizA] = raizB;
            }else if(rango[raizA]>rango[raizB]){
                padre[raizB] = raizA;
            }else{
                padre[raizA]=raizB;
                rango[raizB]++;
            }
        }
    }
};
vector <Edge> edgeList;
vector <Edge> mst;
int total=0;
void Kruskal(int tam) {
    DS ds(tam);
    sort(edgeList.begin(), edgeList.end());
    for (const Edge& e : edgeList) {
        int raizOrigen = ds.find(e.origen);
        int raizDestino = ds.find(e.destino);
        if (raizOrigen != raizDestino) {
            mst.emplace_back(e);
            total+=e.peso;
            ds.unionSets(raizOrigen, raizDestino);
        }
    }
}


int main(){
    //freopen("1152.txt", "r", stdin);
    int n, e;
    while(scanf("%d %d", &n,&e)){
        if(!n && !e) return 0;
        edgeList.assign(e, Edge());
        mst.assign(0,Edge());
        total=0;
        int aux=0;
        for(int i=0; i<e; i++){
            scanf("%d %d %d", &edgeList[i].origen, &edgeList[i].destino, &edgeList[i].peso);
            aux+=edgeList[i].peso;
        }
        Kruskal(n);
        printf("%d\n", aux-total);
    }

return 0;
}
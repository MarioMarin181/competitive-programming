#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
struct Edge{
    int origen;
    int destino;
    int peso;
    Edge(int origen, int destino, int peso): origen{origen}, destino{destino}, peso{peso}{};
    bool operator <(const Edge & other) const{
        return peso < other.peso;
    }
};
struct DS{
    vi padre;
    vi rango;
    DS(int tam){
        padre.resize(tam);
        rango.resize(tam);
        for(int i=0; i<tam; i++){
            padre[i]=i;
            rango[i]=0;
        }
    }
        int find(int a){
            if(padre[a]!=a){
                padre[a]=find(padre[a]);
            }
            return padre[a];
        }
        void unionSets(int a, int b){
            int raizA = find(a);
            int raizB = find(b);
            if(raizA!=raizB){
                if(raizA<raizB) padre[raizA]=raizB;
                else if(raizA>raizB) padre[raizB]=raizA;
                else{
                    padre[raizA]=raizB;
                    rango[raizB]++;
                }
            }
        }
};

vector <Edge> original;
vector <Edge> nuevo;

int Kruskal(const vector<Edge>& edges, int tam){
    DS ds(tam);
    int total=0;
    vector<Edge> sorteado = edges;
    sort(sorteado.begin(), sorteado.end());
    for(const Edge &e: sorteado){
        int raizOrigen = ds.find(e.origen);
        int raizDestino = ds.find(e.destino);
        if(raizOrigen != raizDestino){
            total+=e.peso;
            ds.unionSets(raizOrigen, raizDestino);
        }
    }
    return total;

}

int main(){
    //freopen("908.txt", "r", stdin);
    int n, k, m, i=0;
    while(scanf("%d", &n) != EOF){
        if(i!=0) printf("\n");
        original.assign(n-1, Edge(0,0,0));
        nuevo.assign(0, Edge(0,0,0));
        for(int i=0; i<n-1; i++){
            int a, b, w;
            scanf("%d %d %d", &a, &b, &w);
            original[i].origen=a-1;
            original[i].destino=b-1;
            original[i].peso=w;
        }
        int total = Kruskal(original, n);
        printf("%d\n", total);
        scanf("%d ", &k);
        while(k--){
            int a, b, w;
            scanf("%d %d %d", &a, &b, &w);
            nuevo.emplace_back(a-1, b-1, w);
        }
        scanf("%d ", &m);
        while(m--){
            int a, b, w;
            scanf("%d %d %d", &a, &b, &w);
            nuevo.emplace_back(a-1, b-1, w);
        }
        total = Kruskal(nuevo, n);
        printf("%d\n", total);
        i++;
    }



return 0;
}

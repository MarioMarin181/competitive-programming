#include <bits/stdc++.h>

using namespace std;

struct estudiantes{
    string nombre;
    char region;
    int distancia;
    bool operator < (const estudiantes & other) const{
        if(distancia<other.distancia) return true;
        else if(distancia>other.distancia) return false;
        else if (region<other.region) return true;
        else if (region>other.region) return false;
        else if (nombre<other.nombre) return true;
        else if (nombre>other.nombre) return false;
        else return false;
    }
};

int main(){
    int q;
    while(cin>>q){
        vector <estudiantes> estudiante (q);
        for(int i=0; i<q; i++){
            cin>>estudiante[i].nombre>>estudiante[i].region>>estudiante[i].distancia;
        }
        sort(estudiante.begin(), estudiante.end());
        for(int i=0; i<estudiante.size(); i++) cout<<estudiante[i].nombre<<"\n";
    }

return 0;
}

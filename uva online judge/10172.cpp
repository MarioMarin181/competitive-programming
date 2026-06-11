#include <bits/stdc++.h>

using namespace std;

typedef queue <int> b;
vector <b> estaciones;
stack <int> car;

int cp, ne, cs, cc, j, cont;

bool validacion(){
    if(!car.empty()) return true;
    for(int i=0; i<estaciones.size(); i++)
        if(!estaciones[i].empty()) return true;
    return false;
}

void descarga(){
    while (!car.empty()	&& (car.top() == j || estaciones[j].size() < cc)) {
        if (car.top() != j) {
            estaciones[j].push(car.top());
        }
        car.pop();
        cont++;
    }
}

void carga(){
    while(!estaciones[j].empty() && car.size()<cp){
        car.push(estaciones[j].front());
        estaciones[j].pop();
        cont++;
    }
}

int main(){


    scanf("%d", &cs);

    while(cs--){
        scanf("%d %d %d", &ne, &cp, &cc);
        estaciones.assign(ne, b());
        for (int i = 0; i < ne; i++) {
            int nc;
            scanf("%d", &nc);
            while (nc--) {
                int aux;
                scanf("%d", &aux);
                estaciones[i].push(aux - 1);
            }
        }

        j = 0;
        cont=0;
       while(validacion()){
            descarga();
            carga();
            if(validacion()){
                if(j==estaciones.size()-1) j=0;
                else j++;
                cont+=2;
            }
       }
       printf("%d\n", cont);
    }

return 0;
}



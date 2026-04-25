#include<bits/stdc++.h>

using namespace std;

int main(){
    float n, e, personas;
    scanf("%f", &n);
    while(n--){
       scanf("%f", &e);
       float promedio = 0, porcentaje;
        vector<float>notas(e, 0);
        for(int i=0; i<e; i++){
            scanf("%f", &notas[i]);
            promedio+=notas[i];
        }
        promedio/=e;
        sort(notas.begin(), notas.end());
        int pos = upper_bound(notas.begin(), notas.end(), promedio)-notas.begin();
        if(pos<notas.size()){
            if(notas[pos]==promedio) pos++;
            personas = notas.size()-pos;
            porcentaje = (personas*100)/notas.size();
            printf("%.3f%\n", porcentaje);
        }else printf("0.000%\n");
    }


return 0;
}
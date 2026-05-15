#include<bits/stdc++.h>

using namespace std;

int main(){
char m;
cin>>m;
int cont=0;
double numero, promedio=0.0;
for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
        cin>>numero;
        if(j>i){
            cont++;
            promedio+=numero;
        }
    }
}
switch(m){
    case 'S':{
        cout<<fixed<<setprecision(1)<<promedio<<"\n";
        break;
    }
    case 'M': {
        promedio/=cont;
        cout<<fixed<<setprecision(1)<<promedio<<"\n";
        break;
    }
}
return 0;
}
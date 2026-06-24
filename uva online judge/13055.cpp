#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    stack <string> personas;
    cin.ignore();
    while(n--){
        string cadena, nombre;
        getline(cin, cadena);
        if(cadena[0]=='S'){
            nombre=cadena.substr(6, cadena.size()-6);
            personas.push(nombre);
        }else if(cadena[0]=='T'){
            if(!personas.empty()){
                cout<<personas.top()<<"\n";
            }else{
                cout<<"Not in a dream\n";
            }
        }else{
            if(!personas.empty()){
                personas.pop();
            }

        }
    }
}

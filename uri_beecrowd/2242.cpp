#include <bits/stdc++.h>

using namespace std;

int main(){
    string cadena="", aux="";
    cin>>cadena;
    for (int i=0; i<cadena.size(); i++){
        if (cadena[i]==97 || cadena[i]==101 || cadena[i]==105 || cadena[i]==111 || cadena[i]==117){
            aux+=cadena[i];
        }
    }
    for (int i=0; i<aux.size(); i++){
        if (aux[i]!=aux[aux.size()-1-i]){
            cout<<"N\n";
            return 0;
        }
    }
    cout<<"S\n";
    
    
    return 0;
}
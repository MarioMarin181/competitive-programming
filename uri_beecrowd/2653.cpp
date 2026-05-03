#include <bits/stdc++.h>

using namespace std;

int main(){
    string cadena;
    int cont=1;
    map <string, int> joya;
    while(cin>>cadena){
        joya[cadena]=cont;
        cont++;
    }
    cout<<joya.size()<<endl;
    return 0;
}
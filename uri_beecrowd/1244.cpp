#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    return a.size()>b.size();
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string cadena;
    while(n--){
        vector <string> cadenas;
        getline(cin, cadena);
        cadena+=" ";
        string aux="";
        for(int i=0; i<cadena.size(); i++){
            if(cadena[i]!=32) aux+=cadena[i];
            else{
                cadenas.push_back(aux);
                aux="";
            }
        }
        stable_sort(cadenas.begin(), cadenas.end(), cmp);
        for(int i=0; i<cadenas.size(); i++){
            cout<<cadenas[i];
            if(i!=cadenas.size()-1) cout<<" ";
        }
        cout<<"\n";
    }

return 0;
}
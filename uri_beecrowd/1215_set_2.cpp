#include <bits/stdc++.h>

using namespace std;

int main(){
    set<string> palabras;
    string palabra="";
    char aux;
    while(cin.get(aux)){
    //for(int i=0; i<170; i++){
        //cin.get(aux);
        if((aux>=65 && aux<=90) || (aux>=97 && aux<=122)) palabra+=tolower(aux);
        else {
            //cout<<"palabra: "<<palabra<<endl;
            palabras.insert(palabra);
            palabra="";
        }
    }
    //}
    for(set<string>::iterator i =palabras.begin(); i!=palabras.end(); i++){
        if(i!=palabras.begin()) cout<<*i<<"\n";
    }
//system("pause");
return 0;
}
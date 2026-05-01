#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> palabras;
    string palabra="";
    char aux;
    while(cin.get(aux)){
    //for(int i=0; i<170; i++){
        //cin.get(aux);
        if((aux>=65 && aux<=90) || (aux>=97 && aux<=122)) palabra+=tolower(aux);
        else {
            //cout<<"palabra: "<<palabra<<endl;
            palabras[palabra]++;
            palabra="";
        }
    }
    //}
    for(map<string, int>::iterator i =palabras.begin(); i!=palabras.end(); i++){
        if(i!=palabras.begin()) cout<<i->first<<"\n";
    }
//system("pause");
return 0;
}
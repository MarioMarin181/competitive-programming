#include<bits/stdc++.h>

using namespace std;

typedef vector<char> letras;


int main(){
    int a,b,c;
    //freopen("b.txt", "r", stdin);
    while(cin>>a>>b>>c){
        map <int, letras> datos;
        datos[a].push_back('A');
        datos[b].push_back('B');
        datos[c].push_back('C');
        if(datos.size()>1){
            for(auto i : datos){
                if(i.second.size()==1) printf("%c\n", i.second[0]);
            }
        }else printf("*\n");
    }


return 0;
}

#include <bits/stdc++.h>

using namespace std;

map <string, int> letras;

void generar(){
    int cont=1;
    string cadenita="";
    for(int i=1; i<=26; i++){
        cadenita="";
        cadenita+=(char)i+96;
        letras[cadenita]=cont;
        cont++;
    }
    for(int i=1; i<=26; i++){
        for(int j=i+1; j<=26; j++){
            cadenita="";
            cadenita+=(char)i+96;
            cadenita+=(char)j+96;
            letras[cadenita]=cont;
            cont++;
        }
    }
    for(int i=1; i<=26; i++){
        for(int m=i+1; m<=26; m++){
           for(int j=m+1; j<=26; j++){
                cadenita="";
                cadenita+=(char)i+96;
                cadenita+=(char)m+96;
                cadenita+=(char)j+96;
                letras[cadenita]=cont;
                cont++;
            }
        }
    }
    for(int i=1; i<=26; i++){
        for(int k=i+1; k<=26; k++){
            for(int m=k+1; m<=26; m++){
               for(int j=m+1; j<=26; j++){
                    cadenita="";
                    cadenita+=(char)i+96;
                    cadenita+=(char)k+96;
                    cadenita+=(char)m+96;
                    cadenita+=(char)j+96;
                    letras[cadenita]=cont;
                    cont++;
                }
            }
        }
    }

    for(int i=1; i<=26; i++){
        for(int n=i+1; n<=26; n++){
            for(int k=n+1; k<=26; k++){
                for(int m=k+1; m<=26; m++){
                   for(int j=m+1; j<=26; j++){
                        cadenita="";
                        cadenita+=(char)i+96;
                        cadenita+=(char)n+96;
                        cadenita+=(char)k+96;
                        cadenita+=(char)m+96;
                        cadenita+=(char)j+96;
                        letras[cadenita]=cont;
                        cont++;
                    }
                }
            }
        }
    }
}

int main(){
    generar();
    //freopen("417.txt", "r", stdin);
    char aux;
    int val=0, total=0;
    bool control=true;
    string cadena="", word;
    while(cin>>word){
    //for(int i=0; i<4; i++){
        //cin>>word;
        if(letras.find(word)==letras.end()) cout<<"0\n";
        else cout<<letras[word]<<endl;
    }

return 0;
}

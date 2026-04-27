#include <bits/stdc++.h>

using namespace std;

int main(){
    int cont, aux, c;
    char let;
    while(scanf("%d", &c), c){
        while(c--){
            cont=0;
            for(int i=0; i<5; i++){
                scanf("%d", &aux);
                if(cont<2)
                    if(aux<=127){
                        cont++;
                        let=i+65;
                    }
            }
            if(cont==1) printf("%c\n", let);
            else printf("*\n");
        }
    }


return 0;
}
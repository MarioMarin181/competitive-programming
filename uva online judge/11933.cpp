#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    //bitset <32> prueba(255);
    while(scanf("%d", &n)){
        int cont = 0, i=0;
        if(!n) return 0;
        a=b=0;
        while(n){
            if(n & 1){
                if(cont & 1){
                    a|=1<<i;
                }else b|=1<<i;
                cont++;
            }
            n = n>>1;
            i++;
        }
        //cout<<prueba<<endl;
        printf("%d %d\n", b, a);
    }

return 0;
}

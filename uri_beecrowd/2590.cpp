#include <bits/stdc++.h>

using namespace std;


int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
            int aux = n%4;
            switch(aux){
                case 1: printf("7\n");
                break;
                case 2: printf("9\n");
                break;
                case 3: printf("3\n");
                break;
                case 0: printf("1\n");
                break;
            }

    }


return 0;
}

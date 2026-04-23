#include <bits/stdc++.h>

using namespace std;

int main(){
    string cadena;
    while(getline(cin, cadena)){
        if(cadena == "*") return 0;
        bool control = false, ans = true;
        char letra = tolower(cadena[0]);
        for(int i=1; i<cadena.size(); i++){
            if(control){
                control = false;
                if(tolower(cadena[i])!=letra){
                    ans = false;
                    break;
                }
            }
            if(cadena[i]==32) control = true;
        }
        if(ans) printf("Y\n");
        else printf("N\n");
    }

return 0;
}

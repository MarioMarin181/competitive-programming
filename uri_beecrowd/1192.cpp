#include <bits/stdc++.h>

using namespace std;

int main(){
    string cadena;
    int n;
    scanf("%d", &n);
    //cin.ignore();
    while(n--){
        cin>>cadena;
        int result;
        if(cadena[0]==cadena[2]) result = (cadena[0]-'0')*(cadena[2]-'0');
        else if(cadena[1]>=65 && cadena[1]<=90) result = (cadena[2]-'0') - (cadena[0]-'0');
        else result = (cadena[2]-'0') + (cadena[0]-'0');
        printf("%d\n", result);
    }

return 0;
}

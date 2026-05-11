#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, numero;
    cin>>n;
    while(n--){
        int cont=0;
        bool control=true;
        cin>>numero;
        for(int i=3; i<sqrt(numero) && control; i+=2){
            if(numero%i==0){
                control=false;
            }
        }
        if(control){
            cout<<"Prime\n";
        }else{
            cout<<"Not Prime\n";
        }
    }

return 0;
}
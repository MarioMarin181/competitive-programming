#include <bits/stdc++.h>

using namespace std;

int main(){
    char car;
    cin>>car;
    double matriz[12][12];
    double suma=0.0;
    for (int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            cin>>matriz[i][j];
            if(i>j && i<11-j){
                suma+=matriz[i][j];
            }
        }
    }
    switch (car){
        case 'S': {
            cout<<suma<<"\n";
            break;
        }
        case 'M': {
            cout<<fixed<<setprecision(1)<<(suma/30)<<"\n";
            break;
        }
    }
    
    return 0;
}
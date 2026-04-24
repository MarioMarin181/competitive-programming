#include <bits/stdc++.h>

using namespace std;

int main(){
    float s, va, vb;
    while(cin>>s>>va>>vb){
        if(vb>=va) printf("impossivel\n");
        else{
            float aux = va-vb;
            float result = s/aux;
            cout<<fixed<<setprecision(2)<<result<<endl;
        }
    }

return 0;
}

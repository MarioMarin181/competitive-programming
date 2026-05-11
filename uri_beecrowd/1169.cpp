#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        unsigned long long resultado=((pow(2,x))/12)/1000;
        cout<<resultado<<" kg\n";

    }

return 0;
}
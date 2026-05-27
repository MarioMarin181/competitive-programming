#include<bits/stdc++.h>

using namespace std;

int main(){
long long numero1, numero2;
while(cin>>numero1>>numero2){
    if(numero1>numero2){
        cout<<numero1-numero2<<"\n";
    }else{
        cout<<numero2-numero1<<"\n";
    }
}

return 0;
}
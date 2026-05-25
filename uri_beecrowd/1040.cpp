#include <bits/stdc++.h>

using namespace std;

int main(){
    double numero1, numero2, numero3, numero4, promedio;
    cin>>numero1>>numero2>>numero3>>numero4;
    promedio=(numero1*2.0)+(numero2*3.0)+(numero3*4.0)+numero4;
    promedio/=10;
    cout<<"Media: "<<fixed<<setprecision(1)<<promedio<<"\n";
    if(promedio>=7.0){
        cout<<"Aluno aprovado.\n";
    }else if(promedio<5.0){
        cout<<"Aluno reprovado.\n";
    }else{
        cout<<"Aluno em exame.\n";
        cin>>numero1;
        cout<<"Nota do exame: "<<numero1<<"\n";
        promedio=(promedio+numero1)/2;
        if(promedio>=5.0){
            cout<<"Aluno aprovado.\n";
        }else{
            cout<<"Aluno reprovado.\n";
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<promedio<<"\n";
    }

	return 0;
}
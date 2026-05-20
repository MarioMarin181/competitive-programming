#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <double> lados(3);
	
	cin>>lados[0]>>lados[1]>>lados[2];
	sort(lados.rbegin(),lados.rend());
	
	if (lados[0]>=lados[1]+lados[2]){
		cout<<"NAO FORMA TRIANGULO\n";
		return 0;
	}if(pow(lados[0], 2)==(pow(lados[1],2)+pow(lados[2],2))){
		cout<<"TRIANGULO RETANGULO\n";
	}if(pow(lados[0], 2)>(pow(lados[1],2)+pow(lados[2],2))){
		cout<<"TRIANGULO OBTUSANGULO\n";
	}if(pow(lados[0], 2)<(pow(lados[1],2)+pow(lados[2],2))){
		cout<<"TRIANGULO ACUTANGULO\n";
	}if(lados[0]==lados[1] && lados[0]==lados[2]){
		cout<<"TRIANGULO EQUILATERO\n";
	}else if(lados[0]==lados[1] || lados[1]==lados[2]){
		cout<<"TRIANGULO ISOSCELES\n";
	}
	
	
	return 0;
}
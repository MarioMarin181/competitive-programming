#include <bits/stdc++.h>

using namespace std;
struct producto{
	int codigo;
	int unidades;
	double precio;
};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector <producto> productos(2);
	float total=0;
	
	for (int i=0; i<2; i++){
		cin>>productos[i].codigo>>productos[i].unidades>>productos[i].precio;
		total+=(productos[i].unidades*productos[i].precio);
	}
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<"\n";
	
	
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	double h=0, velocidad=0;
	cin>>h;
	cin>>velocidad;
	
	double respuesta=(h*velocidad)/12;
	
	cout<<fixed<<setprecision(3)<<respuesta<<"\n";
	
	return 0;
}
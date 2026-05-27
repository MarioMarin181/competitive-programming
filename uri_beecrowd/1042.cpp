#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <int> numeros(3,0);
	for (int i=0; i<3; i++){
		cin>>numeros[i];
	}
	vector <int> numeros2(3,0);
	numeros2=numeros;
	
	sort(numeros2.begin(), numeros2.end());
	for (int j=0; j<3; j++){
		cout<<numeros2[j]<<"\n";
	}
	cout<<"\n";
	for (int k=0; k<3; k++){
		cout<<numeros[k]<<"\n";
	}
	
	return 0;
}
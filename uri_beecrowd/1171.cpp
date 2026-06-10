#include <bits/stdc++.h>

using namespace std;

int main(){
	int n=0;
	
	cin>>n;
	
	vector <int> arreglo(2010, 0);
	
	for (int i=0; i<n; i++){
		int j;
		cin>>j;
		arreglo[j]++;
	}
	for (int k=1; k<=2000; k++){
		if (arreglo[k]>0){
			cout<<k<<" aparece "<<arreglo[k]<<" vez(es)"<<endl;
		}
		
	}
	
	return 0;
}
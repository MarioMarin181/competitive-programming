#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n=0, vc=0;
	cin>>n;
	vector <int> arreglo(n);
	
	for(int i=0; i<n; i++){
		cin>>arreglo[i];
	}
	vc=arreglo[0];
	sort(arreglo.rbegin(), arreglo.rend());
	if (vc>=arreglo[0]){
		cout<<"S\n";
	}else {
		cout<<"N\n";
	}
	
	return 0;
}
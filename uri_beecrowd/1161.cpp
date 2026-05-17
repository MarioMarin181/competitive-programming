#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1=0, n2=0;
	while (cin>>n1>>n2){
		unsigned long long f1=1, f2=1;
		for (int i=1; i<=n1; i++){
			f1*=i;
		}
		for (int j=1; j<=n2; j++){
			f2*=j;
		}
		cout<<(f1+f2)<<"\n";
	}
	return 0;
}
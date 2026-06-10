#include <bits/stdc++.h>

using namespace std;

int main(){
	int n=0, r=1;

	cin>>n;
	
	for (int i=1; i<=n; i++){
		r=r*i;
	}
	cout<<r<<endl;
	
	return 0;
}
#include <bits/stdc++.h>

using namespace std;
int mcd (int a, int b){
	if (b==0) return a;
	return mcd(b, a%b);
}
int main(){
	int n=0, n1=0, n2=0;
	
	cin>>n;
	
	while(n--){
		cin>>n1>>n2;
		
		cout<<mcd(n1, n2)<<"\n";
		
	}	
	
	
	return 0;
}
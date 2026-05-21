#include <bits/stdc++.h>

using namespace std;

int main(){
	int a=0, b=0;
	
	cin>>a>>b;
	if (b>=a){
		
		if (b%a==0){
			cout<<"Sao Multiplos\n";
		}else {
			cout<<"Nao sao Multiplos\n";
		}
	}else {
		if (a%b==0){
			cout<<"Sao Multiplos\n";
		}else {
			cout<<"Nao sao Multiplos\n";
		}
	}
	
	
	return 0;
}
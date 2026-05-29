#include <bits/stdc++.h>

using namespace std;

int main(){
	int cor1=0, cor2=0;
	
	while(cin>>cor1 && cin>>cor2){
		if (cor1>0 && cor2>0){
			cout<<"primeiro\n";
		}else if (cor1>0 && cor2<0){
			cout<<"quarto\n";
		}else if (cor1<0 && cor2<0){
			cout<<"terceiro\n";
		}else if (cor1<0 && cor2>0){
			cout<<"segundo\n";
		}else {
			break;
		}
		
		
	}
	
	
	return 0;
}
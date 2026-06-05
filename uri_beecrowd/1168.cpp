#include <bits/stdc++.h>

using namespace std;

int main(){
	string cadena;
	int n=0, suma=0;
	
	cin>>n;
	for (int i=0; i<n; i++){
		suma=0;
		cin>>cadena;
		for (int j=0; j<cadena.size(); j++){
			switch (cadena[j]){
				case '1':{
					suma+=2;
					break;
				}
				case '2':{
					suma+=5;
					break;
				}
				case '3':{
					suma+=5;
					break;
				}
				case '4':{
					suma+=4;
					break;
				}
				case '5':{
					suma+=5;
					break;
				}
				case '6':{
					suma+=6;
					break;
				}
				case '7':{
					suma+=3;
					break;
				}
				case '8':{
					suma+=7;
					break;
				}
				case '9':{
					suma+=6;
					break;
				}
				case '0':{
					suma+=6;
					break;
				}
			}
		}
		cout<<suma<<" leds"<<endl;		
	}
	
	
	
	
	return 0;
}
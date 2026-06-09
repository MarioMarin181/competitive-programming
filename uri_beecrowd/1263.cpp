#include <iostream>

using namespace std;

int main(){
	string cadena;
	char f;
	int alli, control;
	while(getline(cin,cadena)){
		alli=0;
		control=0;
		cadena[0]=toupper(cadena[0]);
		f=cadena[0];
		for (int i=1; i<cadena.size(); i++){
			if (cadena[i]==32){
				cadena[i+1]=toupper(cadena[i+1]);
				if (cadena[i+1]==f){
					if (control==0){
						alli++;
						control++;
					}				
				}else {
					f=cadena[i+1];
					control=0;
				}
				i++;
			}
		}
		cout<<alli<<endl;

	}
	return 0;
}
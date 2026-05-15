#include<bits/stdc++.h>
using namespace std;

int main(){
	float M[12][12];
	char entrada;
	
	entrada=getchar();
	
	for (int i =0 ; i < 12;i++){
	    for(int j = 0; j<12;j++){	    	
			cin>>M[i][j];	
			
		}
	}

	float suma = 0,contN=0;

	for (int i =0;i < 12;i++){
        int puntosuma= 0;
		for(int j = i+1;j < 12;j++){			
			suma += M[i][j];
			contN++;
        }
    }
		
    if(entrada=='S'){
        cout<<fixed<<setprecision(1)<<suma<<"\n";
    }else{
        cout<<fixed<<setprecision(1)<<suma/contN<<"\n";
    }

return 0;
}
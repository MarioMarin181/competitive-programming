#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string dia1, dia2, tiempo1, tiempo2;
	int horas1=0, horas2=0, minutos1=0, minutos2=0, segundos1=0, segundos2=0, diai=0, diaf=0;
	getline(cin, dia1);
	fflush(stdin);
	getline(cin, tiempo1);
	fflush(stdin);
	getline(cin, dia2);
	fflush(stdin);
	getline(cin, tiempo2);

	for (int i=4; i<dia1.size(); i++){
		diai=(diai+(dia1[i]-'0'))*10;
	}
	diai/=10;
	for (int i=4; i<dia2.size(); i++){
		diaf=(diaf+(dia2[i]-'0'))*10;
	}
	diaf/=10;
	horas1=((tiempo1[0]-'0')*10)+(tiempo1[1]-'0');
	horas2=((tiempo2[0]-'0')*10)+(tiempo2[1]-'0');
	minutos1=((tiempo1[5]-'0')*10)+(tiempo1[6]-'0');
	minutos2=((tiempo2[5]-'0')*10)+(tiempo2[6]-'0');
	segundos1=((tiempo1[10]-'0')*10)+(tiempo1[11]-'0');
	segundos2=((tiempo2[10]-'0')*10)+(tiempo2[11]-'0');

	if (segundos1!=0){
		segundos1=60-segundos1;
		minutos1++;
		minutos1=60-minutos1;
		horas1++;
		horas1=24-horas1;
		diai++;
		segundos1+=segundos2;
		if (segundos1>=60){
			segundos1=segundos1-60;
			minutos1++;
		}
		minutos1+=minutos2;
		if (minutos1>=60){
			minutos1=minutos1-60;
			horas1++;
		}
		horas1+=horas2;
		if (horas1>=24){
			horas1=horas1-24;
			diaf++;
		}
	}else if (minutos1!=0){
		minutos1=60-minutos1;
		horas1++;
		horas1=24-horas1;
		diai++;
		segundos1+=segundos2;		
		minutos1+=minutos2;
		if (minutos1>=60){
			minutos1=minutos1-60;
			horas1++;
		}
		horas1+=horas2;
		if (horas1>=24){
			horas1=horas1-24;
			diaf++;
		}
	}else if (horas1!=0){
		horas1=24-horas1;
		diai++;
		segundos1+=segundos2;		
		minutos1+=minutos2;
		horas1+=horas2;
		if (horas1>=24){
			horas1=horas1-24;
			diaf++;
		}
	}
	diai=diaf-diai;
	cout<<diai<<" dia(s)\n";
	cout<<horas1<<" hora(s)\n";
	cout<<minutos1<<" minuto(s)\n";
	cout<<segundos1<<" segundo(s)\n";
	return 0;
}
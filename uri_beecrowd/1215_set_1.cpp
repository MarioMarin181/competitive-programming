#include<bits/stdc++.h>
using namespace std;

int main (){
	
	string palabra;
	char letra;
	set<string>dicc;
	
	
	while(cin.get(letra)){
		if(letra>=65 && letra<=90 || letra>=97 && letra<=122){
			
			palabra+=tolower(letra);
			
		}
		else{
			
			dicc.insert(palabra);
			palabra="";
		}
		
	}
	if(!palabra.empty()){
		dicc.insert(palabra);
			palabra="";
	}
	for(set<string>::iterator i=dicc.begin();i!=dicc.end();i++){
		
		if(i==dicc.begin())i++;
		if(*i!="\n"){
			cout<<*i<<"\n";
		}
	}
	
	return 0;
	
}
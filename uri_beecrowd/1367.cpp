#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        map <string, string> estados;
        map <string, int> contador;
        int c = 0, p = 0;
        while(n--){
            string ejercicio, estado;
            int tiempo;
            cin>>ejercicio;
            cin.ignore();
            cin>>tiempo;
            cin>>estado;
            //cout<<ejercicio<<" "<<tiempo<<" "<<estado<<endl;
            auto it = estados.find(ejercicio);
            if(it != estados.end()){
                string aux = estados[ejercicio];
                //cout<<aux<<endl;
                //cout<<"Entro a diferente"<<endl;
                if(aux == "incorrect"){
                    //cout<<"Entro a incorrect"<<endl;
                    if(estado == "correct"){
                        //cout<<"Entro a estado correct"<<endl;
                        c++;
                        p+=(20*contador[ejercicio]);
                        p+=tiempo;
                        estados[ejercicio] = estado;
                    }else{
                        //cout<<"Entro al else"<<endl;
                        contador[ejercicio]++;
                    }
                }
            }else{
                //cout<<"Entro a "<<endl;
                if(estado=="correct"){
                    //cout<<"Entro al correct de igual a end"<<endl;
                    c++;
                    p+=tiempo;
                }else contador[ejercicio]++;
                estados[ejercicio] = estado;
            }
        }
        cout<<c<<" "<<p<<"\n";


    }


return 0;
}

//Nina Estuco, William André
//ejercicio2.cpp
#include <iostream>
using namespace std;
int main(){
    int n1, n2, c, i;
    cout<<"Ingrese el primer numero:"; cin>>n1; 
    cout<<"Ingrese el segundo numero:";cin>>n2;
    c=0;
    i=1;
    if(n1>=1 && n2>=1){
        while(i<=n1 && i<=n2){
            if(n1%i==0 && n2%i==0){
                c=c+1;
            }
            i=i+1;
        }
        if(c>1){
            cout<<"No son PESI"<<endl;
        }
        else{
            cout<<"Son PESI"<<endl;
        }
    }
    else{
        cout<<"Numero(s) no admitido(s), ingrese 2 numeros positivos";
    }
    return 0;
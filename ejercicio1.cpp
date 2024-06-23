//Nina Estuco, William André
//ejercicio1.cpp
#include <iostream>
using namespace std;
int main(){
    int op1, op2, r;
    char op;
    cout<<"Ingrese el primer operando:"; cin>>op1;
    cout<<"Ingrese el segundo operando:"; cin>>op2;
    cout<<"Ingrese el operador:"; cin>>op;
    switch(op){
        case '+':
            r=op1+op2;
            cout<<r;
            break;
        case '-':
            r=op1-op2;
            cout<<r;
            break;
        case '*':
            r=op1*op2;
            cout<<r;
        break;
        case '/':
            if(op2!=0){
                r=op1/op2;
                cout<<r;
            }
            else{
                cout<<"Resultado indefinido o indeterminado";
            }
            break;
    }
    return 0;
}
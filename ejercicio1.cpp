//Nina Estuco, William André
//ejercicio1.cpp
#include <iostream>
using namespace std;
int main(){
    int op1, op2, op, r;
    cin>>op1;
    cin>>op2;
    cin>>op;
    switch(op){
    case '+':
        r=op1+op2;
        break;
    case '-':
        r=op1-op2;
        break;
    case '*':
        r=op1*op2;
        break;
    case '/':
        r=op1/op2;
        break;
    }
    cout<<r;
    return 0;
}
//Nina Estuco, William André
//ejercicio3.cpp
#include <iostream>
using namespace std;
int sumatoria(int a);
int factorial(int b);

int main(){
    int n, sum;
    cout<<"Cantidad de sumandos:"; cin>>n;
    sum=sumatoria(n);
    cout<<"La sumatoria es "<<sum<<endl;
    return 0;
}

int sumatoria(int a){
    int s;
    s=0;
    for(int i=1; i<=a; i++){
        s=s+(factorial(i)/(3*i));
    }
    return s;
}

int factorial(int b){
    int f;
    f=1;
    for(int i=2; i<=b; i++){
        f=f*i;
    }
    return f;
}
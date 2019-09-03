#include <iostream>
#include "cmath"
using namespace std;

float raizCuadrada(float n, float r){
    float newR = ((n/r)+r)/2;
    if(abs(r-newR)<0.001){
        return newR;
    }else{
        return raizCuadrada(n,newR);
    }
}


int main() {
    float numero;
    cout<<"Ingrese el numero a evaluar: ";
    cin>>numero;
    cout<<"Su raiz es: "<<raizCuadrada(numero,1);

    return 0;
}
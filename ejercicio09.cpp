/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y el m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. Se listar� M�ximo -5 M�nimo -42.*/

#include <iostream>

using namespace std;

int main(){
int maximo,minimo,n;

cout<<"ingrese los numeros y presione 0 para terminar:"<<endl;
cin>>n;

maximo=n;
minimo=n;

while (n!=0){
        cin>>n;
    if (n>maximo){
        maximo=n;
    }
    else if (n<minimo){
        minimo=n;
    }

}
cout<<"el maximo numero ingresado es: "<<maximo<<endl;
cout<<"el numero minimo ingresado es: "<<minimo<<endl;
return 0;}

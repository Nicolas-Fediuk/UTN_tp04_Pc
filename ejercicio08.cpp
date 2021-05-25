/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo y la posición del máximo en la lista. En caso de “empates”
considerar la primera aparición.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.*/

#include <iostream>

using namespace std;
int main(){

int maximo,n,posicion,cero=0,contador;

cout<<"ingrese los numeros y presione 0 para terminar:"<<endl;
cin>>n;

posicion=0;
maximo=0;
contador=1;


while (cero!=1){
    cin>>n;
    contador++;
    if (n>maximo){
        maximo=n;
        posicion=contador;
    }
    if(n==0){
        cero++;
    }
}
cout<<endl;
cout<<"el numero maximo ingresado es: "<<maximo<<endl<<"su posicion es: "<<posicion<<endl;
return 0;
}

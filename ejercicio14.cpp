/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que
le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4*/

#include<iostream>

using namespace std;

int main(){
int maximo,maximo2,n,pos=0,cero=0;

cout<<"ingrese los numeros y al finalizar presione 0:"<<endl;
cin>>n;

while (n!=0){
    pos++;
    if (pos==1){
        maximo=n;
        maximo2=n;
    }
    else if (n>maximo){
        maximo2=maximo;
        maximo=n;
    }
    else if (n>maximo2||pos==2){
        maximo2=n;
    }
    cin>>n;
}
cout<<"primer numero maximo: "<<maximo<<endl;
cout<<"segundo numero maximo: "<<maximo2<<endl;
return 0;
}

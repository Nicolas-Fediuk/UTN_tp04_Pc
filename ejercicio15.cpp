/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan
dos n�meros consecutivos iguales, y luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listar� M�ximo 55.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, -13, -13. Se listar� M�ximo 55.*/

#include <iostream>

using namespace std;

int main (){
int n,maximo,iguales=0,anterior;

cout<<"ingrese los numero hasta digitar 2 iguales:"<<endl;
cin>>n;

maximo=0;


while (iguales==0){
    if  (n>maximo){
        maximo=n;
    }
    anterior=n;
    cin>>n;
    if (n==anterior){
        iguales++;
    }
}
cout<<"el numero maximo ingresado es: "<<maximo<<endl;
return 0;
}

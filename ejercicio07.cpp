/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.*/

#include <iostream>

using namespace std;
int main(){
int n,cero,maximo;

cero=0;

cout<<"ingrese los numeros y un 0 para terminar:"<<endl;
cin>>n;
maximo=n;

while (cero!=1){
    cin>>n;
    if (n>maximo){
        maximo=n;
    }
    if (n==0){
        cero++;
    }
}
cout<<endl;
cout<<"el numero maximo ingresado es: "<<maximo<<endl;
return 0;
}

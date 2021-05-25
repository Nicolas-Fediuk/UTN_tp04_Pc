/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.*/

#include <iostream>

using namespace std;
int main(){

int n,np,nn,cantidad;
cantidad=0;
np=0;
nn=0;
cout<<"ingrese los numeros, y un 0 para terminar"<<endl;
while (cantidad==0){
    cin>>n;
    if (n>0){
        np++;
    }
    else if (n<0){
        nn++;
    }
    if (n==0){
        cantidad++;
    }
}
cout<<endl;
cout<<"cantidad de nuneros positivos: "<<np<<endl;
cout<<"cantidad de numeros negativos: "<<nn<<endl;
return 0;
}

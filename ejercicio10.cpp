/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. Máximo Negativo -3. Mínimo Positivo 2.*/

#include <iostream>

using namespace std;
int main(){
int c,n,posimin,negamax,cero,maxinegativo,minipositivo;

cero=0;
posimin=0;
negamax=0;

cout<<"ingrese los numeros y oprima 0 para terminar:"<<endl;

while (cero!=1){
    cin>>n;
    if (n==0){
    cero++;
}
    if (n>0){
        posimin++;
        if (posimin==1){
            minipositivo=n;}
            else if (n<minipositivo){
                minipositivo=n;
            }
    }
  else if (n<0){
        negamax++;
        if (negamax==1){
            maxinegativo=n;}
            else if(n>maxinegativo){
                maxinegativo=n;
            }
}
}
cout<<"el numero minimo de los positivos es :"<<minipositivo<<endl;
cout<<"el numero maximo de los negativos es :"<<maxinegativo<<endl;
return 0;
}

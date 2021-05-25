/*) Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el
primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.*/

#include <iostream>

using namespace std;

int main (){
int imp=0,imp2=0,pos=0,n,cero=0;

cout<<"ingrese los numeros y presione 0 para finalizar:"<<endl;

while (cero!=1){
        cin>>n;
    if (n%2!=0){
            pos++;
        if (pos==1){
            imp=n;}
            else if (pos>1){
                imp2=n;}
            }
            if (n==0){
                cero++;
            }
}
cout<<"el primer numero impar es: "<<imp<<endl;
cout<<"el ultimo numero impar es: "<<imp2<<endl;
return 0;}

/*Hacer un programa para que el usuario ingrese dos n�meros y luego el programa
muestre por pantalla los n�meros entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15; y si el
usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.*/

#include <iostream>

using namespace std;
int main(){

int n1,n2,i;

cout<<"ingrese el primer numero: ";
cin>>n1;
cout<<"ingrese el segundo numero: ";
cin>>n2;

i=n1;

cout<<endl;
cout<<"los numeros entre el mayor y el menor de los numeros ingresados son:"<<endl;

if (n1<n2){
while (i<n2-1){
    i++;
    cout<<i<<endl;
}
}
else{
    while(i>n2+1){
        i--;
        cout<<i<<endl;
    }
}
return 0;
}

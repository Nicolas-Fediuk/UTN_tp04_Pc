/*Se define a un número como primo cuando tiene solamente dos divisores.
Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el
mismo es un número primo o es número no primo*/


#include <iostream>

using namespace std;

int main (){
int n,cd=0,i=1;

cout<<"ingrese un numero:"<<endl;
cin>>n;

while (i<=n){
    if (n%i==0){
        cd++;
    }
    i++;
}
if (cd==2){
    cout<<"es primo"<<endl;
}
else{
    cout<<"no es primo"<<endl;
}
return 0;
}

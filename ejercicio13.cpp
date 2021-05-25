/* Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar si todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes. Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”*/

#include<iostream>

using namespace std;

int main() {
int anterior,pos,n,num;

num = 1;
pos = 0;

cout<<"ingrese los numero y al finalizar presione 0:"<<endl;
cin >> n;

while (n!=0) {
        pos++;
		if (pos>1) {
			if (n<anterior) {
				num = 0;
			}
		}
		anterior = n;
    cin>>n;
}
if (num==1) {
		cout << "conjunto ordenado" << endl;
}
else {
		cout << "conjunto no ordenado" << endl;
}
return 0;
}


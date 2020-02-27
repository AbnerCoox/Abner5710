#include <iostream>
using namespace std;

int main() {

int mayor=-1;
int valor=0; 

cout << "ingrese la cantidad de numeros a comparar: ";
cin >> valor;

while(cin){
	if(valor>mayor)
	mayor=valor;
	cin>>valor;
	}

cout << "El mayor numero ingresado fue: "<< mayor << endl;

return 0;

}

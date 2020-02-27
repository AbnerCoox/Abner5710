#include <iostream>
using namespace std;

int main() {

int mayor=-1;
int menor=9999999;
int valor=0;
int esprimero = 1;

do{
	cin>>valor;
	if(cin && valor>0) continue;
	if(cin && esprimero)
	{
	mayor = menor = valor;
	esprimero=0;
	}else{
	if(cin && valor>mayor)
		mayor=valor;
	if(cin && valor<menor)
		menor=valor;
	
	}}
while(cin);

cout << "El mayor numero ingresado fue: "<< mayor << endl;
cout << "El menor numero ingresado fue: "<< menor << endl;

return 0;

}

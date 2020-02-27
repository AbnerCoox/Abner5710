#include <iostream>
using namespace std;

int main() {

int mayor=-1;
int valor =0;

do{
	cin>>valor;
	if(cin && valor>mayor)
	mayor=valor;
	
	}
while(cin);

cout << "El mayor numero ingresado fue: "<< mayor << endl;

return 0;

}

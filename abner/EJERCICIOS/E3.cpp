
#include <iostream>
using namespace std;

int main()
{
	int sp=0;
	long double pp=1;
	
	/*Proceso*/
	for (int i=19; i<401;i++) {
		if (i%2 != 1) {
			
			sp = sp + i;
			pp = pp * i;
		
	}}
	cout << "El resultado de la suma de los numeros pares es:" << sp << endl;
	cout << "El resultado del producto de los numeros pares es:" << pp << endl;

	return 0;
}


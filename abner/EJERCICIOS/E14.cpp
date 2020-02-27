
#include <iostream>
using namespace std;
//la suma de los 10 primeros numeros pares es 110 la de los inpares es 100
int main()
{
	int suma=0;
	/*Proceso*/
	for (int cont = 1; cont < 21;cont ++) {
		if (cont%2 != 1) {
			suma = suma + cont;
		}
	}
	cout << "El resultado de la suma de los 10 primeros numeros pares es:" << suma << endl;

	return 0;
}


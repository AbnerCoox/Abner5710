
#include <iostream>
using namespace std;

//la suma de los numeros pares del 2 al 100 es 2550

int main()
{
	int suma=0;
	
	for (int i=1; i<101;i ++) {
		if (i%2 != 1) {
			suma = suma + i;
		}
	}
	cout << "El resultado de la suma de los numeros pares del 2 al 100 es: " << suma << endl;

	return 0;
	
}


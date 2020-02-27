
#include <iostream>
using namespace std;

int main()
{
	int suma=0;
	
	for (int i= 1; i< 101;i++) {
	
		suma = suma + i * i;
	
	}
	cout << "El resultado de la suma de los cuadrados de los 100 primeros numeros naturales es: " << suma << endl;

	return 0;
}

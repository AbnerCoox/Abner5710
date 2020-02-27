#include <iostream>
using namespace std;

int main()
{
	int sp=0;
	int si=0;
	/*Proceso*/
	for (int cont = 1; cont < 201;cont ++) {
		if (cont%2 != 0) {
			si = si + cont;
		}
		else {
			sp = sp + cont;
		}
	}
	cout << "El resultado de la suma de los números pares es:" << sp << endl;
	cout << "El resultado de la suma de los números inpares es:" << si << endl;

	return 0;
}



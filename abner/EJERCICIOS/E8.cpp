
#include <iostream>

using namespace std;

int main() {

	int num;
	int suma=0;
	
	cout<<"Ingrese los numeros para sumar:\n\n";
	for(int i = 0; i < 10; i++){
		
		cout<<"Numero "<<i+1<<": ";
		cin>>num;
		suma=suma+num;
	}
	cout<<"\nEl resultado de la suma es: "<<suma<<"\n";

	return 0;
}


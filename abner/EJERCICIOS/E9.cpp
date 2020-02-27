
#include <iostream>

using namespace std;

int main() {

	float num;
	float suma;
	float media;
	
	cout<<"Ingrese los numeros:\n\n";
	
	for(int i = 0; i < 50; i++)
	{
		
		cout<<"Numero "<<i+1<<": ";
		cin>>num;
		suma=suma+num;
		
	}
	media=suma/50;
	cout<<"\nEl resultado de la suma es: "<<suma<<"\n";
	cout<<"\nEl promedio es: "<<media<<"\n";
	
	return 0;
}

#include <iostream>

using namespace std;

int main() {

	int num;

	float precio, iva, neto, uni, tpag, desc;

	cout<<"Ingrese la cantidad de los tipos de productos: ";

	cin>>num;

	for(int i = 0; i < num; i++){

		cout<<"\nProducto "<<i+1<<"\n";

		cout<<"\nIngrese el precio del producto: ";

		cin>>precio;
		
		cout<<"\nIngrese la cantidad de unidades: ";
		
		cin>>uni;

		iva=(precio/100)*15;
		neto=iva+precio;
		desc=(neto/100)*5;
		
		if (neto>50000)
		{
		tpag=(neto-desc)*uni;
		cout<<"\nEl precio neto es: "<<neto<<"\n";
		cout<<"\nSe le aplico un descuento del 5%, equivalente a: "<<desc<<"\n";
		cout<<"\nEl total a pagar es: "<<tpag<<"\n\n";
		}
		else
		{
		tpag=neto*uni;
		cout<<"\nEl precio neto es: "<<neto<<"\n";
		cout<<"\nEl total a pagar es: "<<tpag<<"\n\n";
		}
		
	}

	cin.get();

	return 0;

}

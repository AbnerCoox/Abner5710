/******************************************************************************

1293 - Powers of Two
 
Dado un número entero N (0 <= N <= 265), imprima exactamente 2^N.

Ejemplo de entrada
100

Ejemplo de salida
1267650600228229401496703205376

*******************************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
	double N, B, R;
	B=2;
	if(argc != 2)
	{
		cout<<"Error, el programa "<<argv[0]<<" debe proporcionar solo UN parametro:"<<argv[0]<<" N"<<endl;
		return 1;
	}
	
	N=stoi(argv[1]);
	
	for(R=1; N>0; N--)
	{
	R=R*B;
	}
	
	cout<<R<<"\n";
    
	return 0;
	
}

/******************************************************************************
2769 - Engineer's Day

Este es un problema bien simple, dado un entero N. Debes imprimir N veces 
"i: I am participating in the Engineer's day." donde i representa la línea i-ésima.

Ejemplo de entrada
2

Ejemplo de salida
1: I am participating in the Engineer's day.
2: I am participating in the Engineer's day.

*******************************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
	int N;
	
    if(argc != 2)
	{
		cout<<"Error, el programa "<<argv[0]<<" debe proporcionar solo UN parametro:"<<argv[0]<<" N"<<endl;
		return 1;
	}
	
	N=stoi(argv[1]);
	
	for(int i=0; i<N; i++)
	{
	cout<<i+1<<":"<<" I am participating in the Engineer's day."<<"\n";
	}
    
	return 0;
	
}



/******************************************************************************

1049 - Sum

La tarea es encontrar la suma de todos los números enteros comprendidos entre 1 y N (incluyéndolos).

Ejemplo de entrada
3

Ejemplo de salida
6

*******************************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
	int N;
	int suma=0;
	
    if(argc != 2)
	{
		cout<<"Error, el programa "<<argv[0]<<" debe proporcionar solo UN parametro:"<<argv[0]<<" N"<<endl;
		return 1;
	}
	
	N=stoi(argv[1]);
	
	for(int i=1; i<N+1; i++)
	{
	suma=suma+i;
	}
    cout<<suma<<endl;
	return 0;
	
}


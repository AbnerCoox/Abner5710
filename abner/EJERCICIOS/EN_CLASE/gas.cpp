/******************************************************************************
Combustible 

Determinar el costo de combustible de una maquinaria que consume 10 litros si su velocidad es de 
100 KM/H y de 12 litros para velocidades mayores 100 km/h. Utilice la función random para generar 
2000 números entre 50 y 150 y determine cual es el costo de combustible total si este tiene un 
precio de 19 pesos.

*******************************************************************************/
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int obtenerValor(int lim_inf, int lim_sup)
{

	int tmp = lim_inf + rand()%(lim_sup + 1 - lim_inf);
	return tmp;
}

int totalLitros(int lim_inf, int lim_sup)
{
	int sum=0;
	for(int i=0; i<20; i++)
	{
		int tmp = obtenerValor(lim_inf, lim_sup);
		if(tmp>100)
				sum += 12;
		else
				sum += 10;
	}
	return sum;
}

int main(int argc, char *argv[])
{
	int lim_inf=50, lim_sup=150;
	int sum = 0;
	srand(time(NULL));
	
	if(argc != 3)
	{
		cout<<"Error, el programa "<<argv[0]<<" debe proporcionar dos parametros:"<<argv[0]<<"lim_inf lim_sup"<<endl;
		return 1;
	}
	lim_inf=stoi(argv[1],nullptr,10);
	lim_sup=stoi(argv[2],nullptr,10);
	
	sum = totalLitros(lim_inf, lim_sup);

	cout<<"El costo de combustible es:"<<(sum*19)<<endl;
	return 0;
	
}


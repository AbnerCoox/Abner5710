/******************************************************************************
 2185 - A ? B
 Dado dos números A y B, debe realizar los siguientes cálculos:

    A + B
    A - B
    A * B
    A / B
    A mod B
    
Ejemplo de entrada
15 5

Ejemplo de salida
20
10
75
3
0

*******************************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
	int a, b, s, r, m, d, mod;
	
	if(argc != 3)
	{
		cout<<"Error, el programa "<<argv[0]<<" debe proporcionar solo dos parametros:"<<argv[0]<<" A y B"<<endl;
		return 1;
	}
	
	a=stoi(argv[1]);
	b=stoi(argv[2]);
	
	s=a+b;
	r=a-b;
	m=a*b;
	d=a/b;
	mod=a%b;
   
	cout<<s<<"\n";
	cout<<r<<"\n";
	cout<<m<<"\n";
	cout<<d<<"\n";
	cout<<mod<<"\n";
    
	return 0;
	
}


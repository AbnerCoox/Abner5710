/******************************************************************************
1805 - Harder A+B

Dados dos números enteros A y B, usted debe resolver el siguiente cálculo:
R = (A+B) + (A-B) + (B+A) + (B-A)

Ejemplo de entrada
10 5

Ejemplo de salida
30
*******************************************************************************/
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
	int A, B, R;
	
	if(argc != 3)
	{
		cout<<"Error, el programa "<<argv[0]<<" debe proporcionar solo dos parametros:"<<argv[0]<<" A y B"<<endl;
		return 1;
	}
	
	A=stoi(argv[1]);
	B=stoi(argv[2]);
	
	R=(A+B)+(A-B)+(B+A)+(B-A);
   
	cout<<R<<"\n";
    
	return 0;
	
}


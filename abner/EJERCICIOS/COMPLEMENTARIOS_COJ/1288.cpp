/******************************************************************************
1288 - Div 6

Descripción
¿Puedes determinar cuándo un número dado es divisible por seis?

Ejemplo de entrada
2
6
4

Ejemplo de salida
YES
NO

*******************************************************************************/

#include<iostream>
using namespace std;

int main()
{
int N,T;
cin>>T;

for(int i=0;i<T;i++){
    cin>>N;

if (N%6==0)
    {
        cout<<"YES\n";
    } else
    {
        cout<<"NO\n";
    }
}
	return 0;
}

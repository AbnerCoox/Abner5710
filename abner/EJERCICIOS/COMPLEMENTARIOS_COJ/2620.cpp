
/******************************************************************************

2620 - Aaaaaaaah

Descripción
Cuando el dentista ataca, los pacientes son heridos y gritan. 
Realiza un programa que grite proporcionalmente al daño recibido.

Especificación de salida
Su programa debera gritar Aaaaa...aaaah, donde el numero de 'a' es exactamente el doble 
del diametro del instrumento utilizado por el dentista.

Ejemplo de entrada
3

Ejemplo de salida
Aaaaaaaaaaaaah

*******************************************************************************/

#include<iostream>

using namespace std;

int main()
{
int n;
cin>>n;

cout<<"A";

for(int i=1;i<n+1;i++)
    {
    cout<<"aaaa";/*Como a es el radio, entonces aa es el diametro y el doble del diametro sería aaaa,
                    es decir, por cada 1 se deberan imprimir aaaa*/
    }
    
cout<<"h";
	
	return 0;
}


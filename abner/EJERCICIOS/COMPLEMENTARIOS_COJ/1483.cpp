/******************************************************************************

1483 - Geometrical Task I

Descripción
¿Te gustan los retos geométricos? Bueno, hoy vamos a trabajar con el cálculo de áreas. Entonces, dada la figura, 
debe encontrar el área (valor entero).

Especificación de entrada
La única línea de la entrada contiene una palabra S, que representa la figura del reto. 
Si la forma es "square" (cuadrado), debe leer también un número entero A, que representa 
el lado del cuadrado. Si es "rectangle" (rectángulo), debe leer dos enteros A y B, los lados del rectángulo.

Especificación de salida
Imprima una sola línea con el número R, que representa el área calculada para la figura.

Ejemplo de entrada
rectangle 5 6

Ejemplo de salida
30

*******************************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int a, b, c, d;
	char k[10];
	
	cin>>k;
	cin>>a;
	if ((k[0]=='s')&&(k[1]=='q')&&(k[2]=='u')&&(k[3]=='a')&&(k[4]=='r')&&(k[5]=='e'))
	{
	    c=a*a;
	    cout<<c;
	}
	
    else if((k[0]=='r')&&(k[1]=='e')&&(k[2]=='c')&&(k[3]=='t')&&(k[4]=='a')&&(k[5]=='n')&&(k[6]=='g')&&(k[7]=='l')&&(k[8]=='e'))
	{   
	    cin>>b;
	    d=a*b;
	    cout<<d;
	}
	return 0;
}


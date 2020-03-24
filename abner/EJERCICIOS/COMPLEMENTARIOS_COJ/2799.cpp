/******************************************************************************
 2799 - Classifying Triangles

Descripcion
El pequeño Iván tiene un problema para determinar la clasificación de un triángulo por sus ángulos. Por esta razón, 
estarás programando un algoritmo que ayude al pequeño Iván. El programa recibirá 3 parámetros: los ángulos del triángulo.

Tú debes imprimir una de las siguientes clasificaciones:

    Equilateral
    Isosceles
    Scalene
    Error

Ejemplo de entrada
60
70
50

Ejemplo de salida
Scalene
*******************************************************************************/

#include<iostream>
using namespace std;

int main()
{
int a,b,c,s;
cin>>a;
cin>>b;
cin>>c;
s=a+b+c;

if(((a==b)&&(b==c)&&(c==a))&&(s==180))
    {   
    cout<<"\nEquilateral";
    } else if (((a!=b)&&(b!=c)&&(c!=a))&&(s==180))
        {
            cout<<"\nScalene";
        } else if ((((a==b)&&(b!=c))||((a==c)&&(b!=c))||((c==b)&&(a!=c)))&&(s==180))
            {
                cout<<"\nIsosceles";
            } else if (s>=181||s<=179)
                {
                    cout<<"\nError";
                }
	return 0;
}


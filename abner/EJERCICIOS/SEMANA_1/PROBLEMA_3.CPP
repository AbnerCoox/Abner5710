/******************************************************************************
						Problema 3

En un edificio de apartamentos existen m apartamentos gratuitos a los que han llegado n solicitantes. Su tarea es
distribuir los apartamentos para que la mayor parte de solicitantes como sea posible obtengan un apartamento.

Cada solicitante tiene un tamaño de apartamento deseado, y aceptará cualquier apartamento cuyo tamaño sea lo 
suficientemente cercano al tamaño deseado.

La información del problema será proporcionada de la siguiente manera: n, m y k: el número de solicitantes, el 
número de apartamentos y la diferencia máxima permitida.

La siguiente línea contendrá n enteros a1, a2, ..., an: que representan el tamaño de apartamento deseado de cada 
solicitante. Si el tamaño deseado de un solicitante es x, él o ella aceptará cualquier apartamento cuyo tamaño esté entre x − k y x + k.

La última línea contiene m enteros b1, b2, ..., bm: que representa el tamaño de cada apartamento.

La salida del programa será un único entero que representa el número de solicitantes admitidos que cumplen con los
requisitos.

Ejemplo

Entrada
4 3 5
60 45 80 60
30 60 75

Salida
2

*******************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
int n,m,k,i,j;
int s=0;

void algoritmo(){
    cout<<"\n Ingrese el numero de solicitantes, numero de apartamentos, diferencia maxima permitida: ";
    cin>>n>>m>>k;
    int a[n]; 
    int b[m];
      cout<<"\n Tamaño departamentos solicitados: ";
    for(i=1;i<=n;i++)
	{
		cin>>a[i];
    }
    cout<<"\n Tamaño departamentos disponibles: ";
    for(j=1;j<=m;j++)
	{
		cin>>b[j];
    }
    n = sizeof(a) / sizeof(a[0]); 
    m = sizeof(b) / sizeof(b[0]); 
    
   	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
        {
    	    if(s<m)
        	{
                if(abs(a[i]<=(b[j]+k))&&(a[i]<=(b[j]-k)))
                {
			    s+=2;
  		    	a[i]=a[i+1];
			    b[j]=b[j+1];
		        }
	    	}
    	}
    }

}
int main (){
    algoritmo();
    cout<<"\n Las personas aceptados son: "<<s;
    return 0;
}

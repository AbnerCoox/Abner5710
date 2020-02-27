#include <iostream>
 
using namespace std;
 
int main()
{
    int num,menor,mayor,rango;
    menor=0;
    mayor=0;
    rango=0;
    cout<<"Numeros enteros positivos de n cantidad de numeros.\n\n";
    
    for(int i=1; i<=10;i++)//cambiar de 10 a 100 para que el programa lea 100 números
    {
        cout<<"Introduzca el Numero Entero "<<i<<": ";
        cin>>num;
        if (num<=15)
        {
            menor+=+1;
        }
        else
        if(num>=50)
        {
            mayor+=+1;
        }
        else
        {
        if(num>=25 && num<=45)
        rango+=+1;
    	}

    }
 
    cout<<"\nLa Cantidad de numeros menores de 15 son:"<<menor<<endl;
    cout<<"\nLa Cantidad de numeros mayores a 50 son:"<<mayor<<endl;
    cout<<"\nLa Cantidad de numeros comprendidos entre 25 y 45 son:"<<rango<<endl;
    return 0;
}

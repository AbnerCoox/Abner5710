#include <iostream>
 
using namespace std;
 
int main()
{
    int num,pos,neg,cero;
    pos=0;
    neg=0;
    cero=0;
    cout<<"Numeros enteros positivos de n cantidad de numeros.\n\n";
    
    for(int i=1; i<=10;i++)//cambiar de 10 a 500 para que el programa lea 500 números
    {
        cout<<"Introduzca el Numero Entero "<<i<<": ";
        cin>>num;
        if (num>0)
        {
            pos+=+1;
        }
        else
        if(num<0)
        {
            neg+=+1;
        }
        else
        cero+=+1;
    }
 
    cout<<"\nLa Cantidad de Positivos Son:"<<pos<<endl;
    cout<<"\nLa Cantidad de Negativos Son:"<<neg<<endl;
    cout<<"\nLa Cantidad de Ceros Son:"<<cero<<endl;
    return 0;
}


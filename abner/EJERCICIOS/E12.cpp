
#include <iostream>
using namespace std;

int main ()
{
   int   n=0, suma_par=0;
   float suma_impar=0;
   int   num_par = 0;
   float num_impar = 0;
   
   cout<<"\nIntroduzca 10 numeros enteros:\n";
   for(int i=1; i<=10; i++)
   {
        cout<<"Numero "<<i<<":";
        cin>>n;
        if(n%2 !=1)
        {
            suma_par += n;
            num_par ++;
         }
         else
        {
            suma_impar += n;
            num_impar ++;

         }
     }

      cout<<"\n La suma de pares es: "<<suma_par;
      cout<<"\n Numeros pares encontrados: "<<num_par;
      cout<<"\n La media aritmetica de los impares es: ";
      cout<< (suma_impar / num_impar) ;
}


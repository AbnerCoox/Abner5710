/******************************************************************************

                           Problema 1.

Considere un algoritmo que tome como entrada un entero positivo n. si n es par, el algoritmo lo divide entre 
dos, y si es impar, el algoritmo lo multiplica por tres y le suma uno. El algoritmo repite este procedimiento 
hasta que n es uno. Por ejemplo, para n=3, la secuencia es como sigue:

3→10→5→16→8→4→2→1

Tu tarea es simular la ejecución del algoritmo para un valor n dado. Dicha n, será proporcionada a partir de la
entrada estándar y enviará a un archivo la secuencia resultante.

*******************************************************************************/

#include <iostream>

using namespace std;

int n;
void algoritmo();

int main()
{   
    cout<<"Ingrese un numero entero:\n";
    cin>>n;
    algoritmo();
}

void algoritmo(){
    
    if (n>=1 && n<=1000000)
    {
        while(n > 1)
        {
	        cout<<n<<" ";
	 	        if (n%2==0)
	 	        {
	 		        n=n/2;
		        }
		        else 
	 	        {
	 		        n=(n*3)+1;
		        }
        }
	    cout<<n<<" ";
    } 
    else
    {
        cout<<"El numero debe estar en el rango 1 - 1,000,000";
	}
}

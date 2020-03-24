
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int lim_inf = 0;
    int lim_sup =100;
    int valor=0;
    int cont1 = 0;
    int cont2 = 0;

    for(int i=0;i<1000;i++)
	{
	 valor = lim_inf + rand()%(lim_sup+ 1-lim_inf);
		
    if (valor>=1 && valor<=30)
    {
    cout<<"\n"<<valor<<" ";
    cout<<"Gano la Tortuga";
    cont1 ++;
    }
    else
    {
    cout<<"\n"<<valor<<" ";
    cout<<"Gano la Liebre";
    cont2 ++;
    }   
	}
	cout<<"\nLa liebre gano "<<cont2<<" veces";
	cout<<"\nLa tortuga gano "<<cont1<<" veces";
     
	return 0;
}






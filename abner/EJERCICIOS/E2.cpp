

#include<iostream>

using namespace std;

int main()
{
	int n,m;

	cout<<"Indroduzca un los numeros para leerlos"<<endl;
	n=m;

	while (n !=-99)
	{
    	cin>>n;
	if (n>m) 
        m=n; 		
	else if (n<=0 && n!=-99) 
    	{
    	cout<<"ERROR, numero invalido, favor de ingresar solo numeros positivo";
    	}
	}
	cout<<"\n"<<"El numero mayor ingresedo es: "<<m;
	
	return 0;
}

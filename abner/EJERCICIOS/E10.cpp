
#include<iostream>

using namespace std;


int main()
{
	int i,n,mul;
	cout<<"Los primeros N multiplos de 4\n"<<endl;
	cout<<"Indroduzca un número: ";
	
	cin>>n;
	
	for(i=1; i<n+1; i++)
	{
	mul=4*i;
	cout<<"\n"<<"["<<i<<"] "<<mul;
	}
	cout<<"\n";
	
	return 0;

}

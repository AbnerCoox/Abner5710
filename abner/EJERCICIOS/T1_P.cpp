
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
int lim_inf = 50;
int lim_sup = 150;
int sum=0;
srand(time(NULL));

if(argc !=3)
{
	cout<<"Error, el programa "<<argv[0]<<" debe proporcionar dos parámetros: "<<argv[0]<<"lim_inf lim_sup"<<endl;
	return 1;
}


lim_inf=stoi(argv[1], nullptr,10);
lim_sup=stoi(argv[2], nullptr,10);

for (int i=0;i<20;i++)
{
int valor = lim_inf + rand()%(lim_sup + 1 - lim_inf);

if(valor>100)
sum +=12;

else
sum +=10;

}

cout<<"\nPrecio del combustible total: "<<(sum*19)<<endl;
return 0;
}

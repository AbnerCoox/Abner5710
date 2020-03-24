
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

srand(time(NULL));
int lim_inf = 50;
int lim_sup = 150;
int l;
int gas=19;
int t=0;
int costo;


cout<<"Vel x min  "<<"Consumo "<<"     $$"<<endl;

for (int i=0;i<1;i++){
int valor = lim_inf + rand()%(lim_sup + 1 - lim_inf);

if(valor>100)
{
costo=12*19;
cout<<valor<<"        "<<"12"<<"          "<<costo<<endl;
}
else
{
costo=10*19;
cout<<valor<<"        "<<"10"<<"          "<<costo<<endl;
}
t=t+costo;

}

cout<<"\nPrecio del combustible total: "<<t<<endl;
return 0;
}


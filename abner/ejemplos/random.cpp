
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int lim_inf = 0;
	int lim_sup =100;
	
	for(int i=0;i<20;i++)
	{
		int valor = lim_inf + rand()%(lim_sup+1-lim_inf);
		cout<<valor<<endl;
	}
/*      int valor = rand()%100;
	cout<<valor<<endl;
	cout<<rand()<<endl;
	cout<<rand()<<endl;
	cout<<rand()<<endl;
*/
	return 0;
}



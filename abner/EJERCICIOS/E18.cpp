
#include <iostream>
using namespace std;


int main() {
	
int n;	
int div= 0;

cout<<"Ingrese un numero: ";
cin>>n;
for(int i=1; i<=n; i++){
	if(n%i==0){
		div=div+1;
	}
	}
	if (div==2){
	cout<<"El numero "<<n<<" es PRIMO."<<endl;	
	}
else
{
cout<<"El numero "<<n<<" NO es PRIMO."<<endl;
}
return 0;
}

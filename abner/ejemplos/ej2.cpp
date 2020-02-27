#include <iostream>

	using namespace std;

	int main() {

        int t;
        int horas, min, seg;
        int temp;

        cout<<"Ingrese el tiempo en segundos :\n";

        cin>>t;

        horas=t/3600;
        temp=t%3600;

        min=temp/60;
        seg=temp%60;

        cout<<"\nHoras: "<<horas;
        if(min<10)
        cout<<"\nMinutos: "<<"0";
	cout<<min<<"\n";
	if(seg<10)
        cout<<"Segundos: "<<"0";
        cout<<seg;

	return 0;

}




#include <iostream>

using namespace std;

int main() {

	int num;
	int notas;

	float promedio; 
	float nota;
	float promedioGeneral = 0;

	cout<<"Ingrese la cantidad de alumnos: ";

	cin>>num;

	for(int i = 0; i < num; i++){

		cout<<"Alumno "<<i+1<<"\n";

		cout<<"Ingrese la cantidad de notas: ";

		cin>>notas;

		promedio = 0;

		for(int j = 0; j < notas; j++){

			cout<<"Nota "<<j+1<<": ";

			cin>>nota;

			promedio += nota;

		}		

		promedio /= notas;

		cout<<"\nPromedio: "<<promedio<<"\n\n";

		promedioGeneral += promedio;

	}

	promedioGeneral /= num;

	cout<<"El promedio general de los alumnos es: "<<promedioGeneral<<endl;

	cin.get();

	return 0;

}


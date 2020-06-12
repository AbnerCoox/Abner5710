
/******************************************************************************
                                            Problema 2.
Te han dado un grupo de n enteros, y tu tarea es encontrar cuatro valores (en posiciones distintas) que sumen x
Para ello te han pedido escribir un programa que reciba el número de elementos en el arreglo 👎, la total de la 
suma requerida(x) y los elementos del arreglo (e1, e2, e3, …, en) tal como se ve a continuación:

8 15
3 2 5 8 1 3 2 3

La salida del programa será la lista de posiciones donde se encuentran los elementos sumados para alcanzar la suma 
x o la palabra IMPOSIBLE en caso de no existir solución.

Ejemplo

Entrada
8 15
3 2 5 8 1 3 2 3

Salida
2 4 6 7

*******************************************************************************/

#include <bits/stdc++.h> 
using namespace std; 
  

// La función encuentra cuatro
// elementos
void EncontrarCuatroElementos(int arr[], int n, int X) 
{ 
    // Almacenar sumas de todos los pares
    // en una tabla
    unordered_map<int, pair<int, int> > mp; 
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            mp[arr[i] + arr[j]] = { i, j }; 
  
    // Recorre todos los pares y busca
    // para X - (suma actual de pares). 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 
            int sum = arr[i] + arr[j]; 
  
            // Si X - sum está presente en la tabla 
            if (mp.find(X - sum) != mp.end()) { 
  
               
                // Asegurarse de que todos los elementos son
                // elementos de matriz distintos y un elemento
                // no se considera más de una vez.
                
                pair<int, int> p = mp[X - sum]; 
                if (p.first != i && p.first != j 
                    && p.second != i && p.second != j) { 
                    cout << arr[i] << ", "
                         << arr[j] << ", "
                         << arr[p.first] << ", "
                         << arr[p.second]; 
                    return; 
                } 
            } 
        } 
    } 
} 

int main() 
{   int X,m,z;
    cout<<"\nElementos en el arreglo y la suma requerida: ";
    cin>>m>>X;
    int arr[m]; 
   
    cout<<"\nEscribir los elementos del arreglo: ";
    
    for(int z=1;z<=m;z++)
	{
		cin>>arr[z];
		
    }
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    EncontrarCuatroElementos(arr, n, X); 
    return 0; 
}


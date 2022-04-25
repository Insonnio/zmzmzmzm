#include <iostream>
#include <conio.h>
#include <string>
#include "CDivisores.h"
using std::cout;
using std::cin;
using std::endl;
using namespace std;



int main()
{
	int numeros;
	int NDivisores[30];
	int contadornuevo = 0;
	CDivisores* objdivisores;
	objdivisores = new CDivisores();
	cout << "Defina un número para determinar los divisores: ";
	cin >> numeros;
	objdivisores->obtener_cantidad_divisores(numeros, contadornuevo);
	cout << "La cantidad de divisores es:"<<objdivisores->mostrar_cantidad_divisores() << endl;
	objdivisores->almacenar_numeros_divisibles(numeros, contadornuevo, NDivisores);
	for (int i = 0; i < numeros; i++)
	{
		if (NDivisores[i]!=0)
		{
			cout << NDivisores[i] << endl;
			//cout << objdivisores->divisores[i];
		}		
	}
	objdivisores->mostrar_Divisores_en_pares(numeros, NDivisores);
	getch();
	return 0;
}

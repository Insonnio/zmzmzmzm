#pragma once
#include <iostream>
#include <string>
using namespace std;
public class CDivisores
{
public:
	int cantidad;
	int* divisores;
	int numeropedido;
public:

	CDivisores();
	~CDivisores();
	//metodos
	void obtener_cantidad_divisores(int numero, int contador);
	int mostrar_cantidad_divisores();
	void almacenar_numeros_divisibles(int numero, int contador, int* almacenamiento);
	void mostrar_Divisores_en_pares(int n, int* arreglo);
};

CDivisores::CDivisores()
{
	int cantidad = 0;
	divisores = new int[30];
}

CDivisores::~CDivisores()
{
}

void  CDivisores::obtener_cantidad_divisores(int numero, int contador)
{
	for (int i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			contador++;
		}
	}
	cantidad = contador;
	numeropedido = numero;
}

int CDivisores::mostrar_cantidad_divisores(void)
{
	return this->cantidad;
}

void CDivisores::almacenar_numeros_divisibles(int numero, int contador, int* Almacenamiento)
{
	for (int i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			Almacenamiento[i - 1] = i;
			//Almacenamiento[i-1] = divisores[i];
			divisores[i - 1] = i;
		}
		else
		{
			Almacenamiento[i - 1] = NULL;
		}
	}

	for (int i = 0; i < numero; i++)
	{
		Almacenamiento[i] == divisores[i];
		//divisores[i] == Almacenamiento[i];
	}
}

void CDivisores::mostrar_Divisores_en_pares(int n, int* arreglo)
{
	for (int i = 0; i < n; i++)
	{
		if (arreglo[i] != 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (arreglo[j] != 0)
				{
					if (divisores[j] % divisores[i] == 0)
					{
						cout << " (" << arreglo[i] << ";" << arreglo[j] << ") ";
					}
				}
			}
		}
	}
}

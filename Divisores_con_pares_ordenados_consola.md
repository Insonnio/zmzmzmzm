#include <iostream>
#include <conio.h>
using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main()
{
	
	int n; 
	int c = 0;
	cout << "Número que se quiere sacar la cantidad de divisores ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			c++;
		}
	}
	cout << "tiene en total " << c<<endl;
	int divisores[10000];
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			divisores[i-1] = i;
		}
		else
		{
			divisores[i - 1] = NULL;
		}
	}
	cout << "los divisores son ";
	for (int i = 0; i < n; i++)
	{
		if (divisores[i] != 0 && divisores[i]!=n)
		{
			cout << divisores[i] << ";";
		}		
		if (divisores[i] == n)
		{
			cout << divisores[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (divisores[i] != 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (divisores[j] != 0)
				{
					if (divisores[j] % divisores[i] == 0)
					{
						cout << " ("<<divisores[i] << ";" << divisores[j]<<") ";
					}
				}
			}
		}
	}
	getch();
	return 0;
}

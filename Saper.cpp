#include <iostream>
using namespace std;

int main()/*Дано поле 10x10 для игры в "Сапёр". Поле заполнено нулями. В некоторых клетках стоят девятки -- мины. 
			Напишите программу, которая в каждой, не занятой миной клетке,
			пишет число от 0 до 8 -- количество мин, которые расположены в смежных клетках.*/
{
	const int Siz = 5;
	int Arr[Siz][Siz];
	for (int i = 0; i < Siz; i++)
	{
		for (int j = 0; j < Siz; j++)
		{
			int a;
			cin >> a;
			Arr[i][j] = a;
		}
	}
	for (int i = 0; i < Siz; i++)
	{
		for (int j = 0; j < Siz; j++)
		{
			if (Arr[i][j] == 9 && i != 0 && i != Siz - 1 && j != 0 && j != Siz - 1) {
				if (Arr[i - 1][j - 1] != 9) { Arr[i - 1][j - 1] = Arr[i - 1][j - 1] + 1; }
				else { Arr[i - 1][j - 1] = Arr[i - 1][j - 1]; }

				if (Arr[i][j - 1] != 9) { Arr[i][j - 1] = Arr[i][j - 1] + 1; }
				else { Arr[i][j - 1] = Arr[i][j - 1]; }

				if (Arr[i + 1][j - 1] != 9) { Arr[i + 1][j - 1] = Arr[i + 1][j - 1] + 1; }
				else { Arr[i + 1][j - 1] = Arr[i + 1][j - 1]; }

				if (Arr[i - 1][j] != 9) { Arr[i - 1][j] = Arr[i - 1][j] + 1; }
				else { Arr[i - 1][j] = Arr[i - 1][j]; }

				if (Arr[i + 1][j] != 9) { Arr[i + 1][j] = Arr[i + 1][j] + 1; }
				else { Arr[i + 1][j] = Arr[i + 1][j]; }

				if (Arr[i - 1][j + 1] != 9) { Arr[i - 1][j + 1] = Arr[i - 1][j + 1] + 1; }
				else { Arr[i - 1][j + 1] = Arr[i - 1][j + 1]; }

				if (Arr[i][j + 1] != 9) { Arr[i][j + 1] = Arr[i][j + 1] + 1; }
				else { Arr[i][j + 1] = Arr[i][j + 1]; }

				if (Arr[i + 1][j + 1] != 9) { Arr[i + 1][j + 1] = Arr[i + 1][j + 1] + 1; }
				else { Arr[i + 1][j + 1] = Arr[i + 1][j + 1]; }
			}
		}
	}
	if (Arr[0][0] == 9) 
	{
		if (Arr[1][0] != 9) { Arr[1][0] = Arr[1][0] + 1; }
		else { Arr[1][0] = Arr[1][0]; }

		if (Arr[0][1] != 9) { Arr[0][1] = Arr[0][1] + 1; }
		else { Arr[0][1] = Arr[0][1]; }

		if (Arr[1][1] != 9) { Arr[1][1] = Arr[1][1] + 1; }
		else { Arr[1][1] = Arr[1][1]; }
	}
		
	if (Arr[Siz - 1][0] == 9) 
	{
		if (Arr[Siz - 2][0] != 9) { Arr[Siz - 2][0] = Arr[Siz - 2][0] + 1; }
		else { Arr[Siz - 2][0] = Arr[Siz - 2][0]; }

		if (Arr[Siz - 2][1] != 9) { Arr[Siz - 2][1] = Arr[Siz - 2][1] + 1; }
		else { Arr[Siz - 2][1] = Arr[Siz - 2][1]; }

		if (Arr[Siz - 1][1] != 9) { Arr[Siz - 1][1] = Arr[Siz - 1][1] + 1; }
		else { Arr[Siz - 1][1] = Arr[Siz - 1][1]; }
	}
	if (Arr[0][Siz - 1] == 9) 
	{
		if (Arr[0][Siz - 2] != 9) { Arr[0][Siz - 2] = Arr[0][Siz - 2] + 1; }
		else { Arr[0][Siz - 2] = Arr[0][Siz - 2]; }

		if (Arr[1][Siz - 2] != 9) { Arr[1][Siz - 2] = Arr[1][Siz - 2] + 1; }
		else { Arr[1][Siz - 2] = Arr[1][Siz - 2]; }

		if (Arr[1][Siz - 1] != 9) { Arr[1][Siz - 1] = Arr[1][Siz - 1] + 1; }
		else { Arr[1][Siz - 1] = Arr[1][Siz - 1]; }
	}
	if (Arr[Siz - 1][Siz - 1] == 9) 
	{
		if (Arr[Siz - 2][Siz - 2] != 9) { Arr[Siz - 2][Siz - 2] = Arr[Siz - 2][Siz - 2] + 1; }
		else { Arr[Siz - 2][Siz - 2] = Arr[Siz - 2][Siz - 2]; }

		if (Arr[Siz - 1][Siz - 2] != 9) { Arr[Siz - 1][Siz - 2] = Arr[Siz - 1][Siz - 2] + 1; }
		else { Arr[Siz - 1][Siz - 2] = Arr[Siz - 1][Siz - 2]; }

		if (Arr[Siz - 2][Siz - 1] != 9) { Arr[Siz - 2][Siz - 1] = Arr[Siz - 2][Siz - 1] + 1; }
		else { Arr[Siz - 2][Siz - 1] = Arr[Siz - 2][Siz - 1]; }
	}
	for (int j = 1; j < Siz - 1; j++)
	{
		if (Arr[0][j] == 9)
		{
				if (Arr[0][j - 1] != 9) { Arr[0][j - 1] = Arr[0][j - 1] + 1; }
				else { Arr[0][j - 1] = Arr[0][j - 1]; }

				if (Arr[1][j - 1] != 9) { Arr[1][j - 1] = Arr[1][j - 1] + 1; }
				else { Arr[1][j - 1] = Arr[1][j - 1]; }

				if (Arr[1][j] != 9) { Arr[1][j] = Arr[1][j] + 1; }
				else { Arr[1][j] = Arr[1][j]; }

				if (Arr[0][j + 1] != 9) { Arr[0][j + 1] = Arr[0][j + 1] + 1; }
				else { Arr[0][j + 1] = Arr[0][j + 1]; }

				if (Arr[1][j + 1] != 9) { Arr[1][j + 1] = Arr[1][j + 1] + 1; }
				else { Arr[1][j + 1] = Arr[1][j + 1]; }
		}
	}
	for (int j = 1; j < Siz - 1; j++)
	{
		if (Arr[Siz - 1][j] == 9)
		{
				if (Arr[Siz - 2][j - 1] != 9) { Arr[Siz - 2][j - 1] = Arr[Siz - 2][j - 1] + 1; }
				else { Arr[Siz - 2][j - 1] = Arr[Siz - 2][j - 1]; }

				if (Arr[Siz - 1][j - 1] != 9) { Arr[Siz - 1][j - 1] = Arr[Siz - 1][j - 1] + 1; }
				else { Arr[Siz - 1][j - 1] = Arr[Siz - 1][j - 1]; }

				if (Arr[Siz - 2][j] != 9) { Arr[Siz - 2][j] = Arr[Siz - 2][j] + 1; }
				else { Arr[Siz - 2][j] = Arr[Siz - 2][j]; }

				if (Arr[Siz - 2][j + 1] != 9) { Arr[Siz - 2][j + 1] = Arr[Siz - 2][j + 1] + 1; }
				else { Arr[Siz - 2][j + 1] = Arr[Siz - 2][j + 1]; }

				if (Arr[Siz - 1][j + 1] != 9) { Arr[Siz - 1][j + 1] = Arr[Siz - 1][j + 1] + 1; }
				else { Arr[Siz - 1][j + 1] = Arr[Siz - 1][j + 1]; }
		}
	}
	for(int i = 1; i < Siz - 1; i++)
	{
		if (Arr[i][0] == 9)
		{
				if (Arr[i - 1][0] != 9) { Arr[i - 1][0] = Arr[i - 1][0] + 1; }
				else { Arr[i - 1][0] = Arr[i - 1][0]; }

				if (Arr[i + 1][0] != 9) { Arr[i + 1][0] = Arr[i + 1][0] + 1; }
				else { Arr[i + 1][0] = Arr[i + 1][0]; }

				if (Arr[i - 1][1] != 9) { Arr[i - 1][1] = Arr[i - 1][1] + 1; }
				else { Arr[i - 1][1] = Arr[i - 1][1]; }

				if (Arr[i][1] != 9) { Arr[i][1] = Arr[i][1] + 1; }
				else { Arr[i][1] = Arr[i][1]; }

				if (Arr[i + 1][1] != 9) { Arr[i + 1][1] = Arr[i + 1][1] + 1; }
				else { Arr[i + 1][1] = Arr[i + 1][1]; }
		}
	}
	for (int i = 1; i < Siz - 1; i++) 
	{
		if (Arr[i][Siz - 1] == 9 && i != 0 && i != Siz - 1)
		{
				if (Arr[i - 1][Siz - 2] != 9) { Arr[i - 1][Siz - 2] = Arr[i - 1][Siz - 2] + 1; }
				else { Arr[i - 1][Siz - 2] = Arr[i - 1][Siz - 2]; }

				if (Arr[i][Siz - 2] != 9) { Arr[i][Siz - 2] = Arr[i][Siz - 2] + 1; }
				else { Arr[i][Siz - 2] = Arr[i][Siz - 2]; }

				if (Arr[i + 1][Siz - 2] != 9) { Arr[i + 1][Siz - 2] = Arr[i + 1][Siz - 2] + 1; }
				else { Arr[i + 1][Siz - 2] = Arr[i + 1][Siz - 2]; }

				if (Arr[i - 1][Siz - 1] != 9) { Arr[i - 1][Siz - 1] = Arr[i - 1][Siz - 1] + 1; }
				else { Arr[i - 1][Siz - 1] = Arr[i - 1][Siz - 1]; }

				if (Arr[i + 1][Siz - 1] != 9) { Arr[i + 1][Siz - 1] = Arr[i + 1][Siz - 1] + 1; }
				else { Arr[i + 1][Siz - 1] = Arr[i + 1][Siz - 1]; }
		}
	}

	cout << "========================" << endl;
	for (int i = 0; i < Siz; i++)
	{
		for (int j = 0; j < Siz; j++)
		{
			cout << Arr[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}


#include <iostream>

const int N = 20000;

void Input(int mas[N], int n)
{
	for (int i = 0; i < 2 * n; i += 2)
		std::cin >> mas[i];
}

void Output(int mas[N], int n)
{
	for (int i = 0; i < 2 * n; i++)
		if (mas[i] != 0)
			std::cout << mas[i] << ' ';
}

void DelNum(int mas[N], int n)
{
	for (int i = 0; i < 2 * n; i += 2)
	{
		int j = mas[i];
		while (j > 10)
			j = j / 10;

		if (j == 2)
			mas[i] = 0;
	}
}

void Dub(int mas[N], int n)
{
	for (int i = 0; i < 2 * n; i += 2)
	{
		short int a = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;

		int j = mas[i];

		while (j > 0) 
		{
			a = j % 10;
			j = j / 10;

			switch (a)
			{
			case 0: 
				a0++; 
				break;
			case 1: 
				a1++; 
				break;
			case 2: 
				a2++; 
				break;
			case 3: 
				a3++; 
				break;
			case 4:
				a4++; 
				break;
			case 5: 
				a5++; 
				break;
			case 6: 
				a6++; 
				break;
			case 7: 
				a7++; 
				break;
			case 8: 
				a8++; 
				break;
			case 9: 
				a9++; 
				break;
			default:
				break;
			}
		}

		if (a0 != 2 and a1 != 2 and a2 != 2 and a3 != 2 and a4 != 2 and a5 != 2 and a6 != 2 and a7 != 2 and a8 != 2 and a9 != 2)
			mas[i + 1] = mas[i];
	}
}

int main()
{
	
	std::cout << "Col-vo simvol: ";
	int n;
	std::cin >> n;


	int mas[N];
	for (int i = 0; i < N; i++)
		mas[i] = 0;

	Input(mas, n);

	DelNum(mas, n);

	Dub(mas, n);

	Output(mas, n);

	return 0;
}

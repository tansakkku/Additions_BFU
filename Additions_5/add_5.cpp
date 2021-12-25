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

void Delete_Num(int mas[N], int n)
{
	for (int i = 0; i < 2 * n; i += 2)
	{
		int num = 0;
		int jj = 1;
		int j = mas[i];
		while (j > 0) 
		{
			
			num = j % 10;
			jj = num * jj;
			j = j / 10;
		}
		
		if (jj == 144)
			mas[i] = 0;

		
	}
}

void Dub(int mas[N], int n)
{
	for (int i = 0; i < 2 * n; i += 2)
	{
		short int a = 0;

		int j = mas[i];

		while (j > 0) 
		{
			a = j % 10;
			j = j / 10;

			if (a == 8)
				mas[i + 1] = mas[i];
		}
	}
}

int main()
{
	
	std::cout << "Col-vo elementov: ";
	int n;
	std::cin >> n;

	int mas[N];
	for (int i = 0; i < N; i++)
		mas[i] = 0;

	Input(mas, n);

	Delete_Num(mas, n);

	Dub(mas, n);

	Output(mas, n);

	return 0;
}

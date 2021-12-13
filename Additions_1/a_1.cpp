#include <iostream>
using namespace std;

int main()
{
	int final = 0;
	int X1, Y1, X2, Y2, A;
	cin >> X1 >> Y1 >> X2 >> Y2 >> A;
	float f1 = X1 / Y1;
	float f2 = X2 / Y2;
	float min = min(f1, f2);
	float minY;
	float minX;

	if (f1 < 1 and Coef2 < 1)
	{
		if (min * Y1 == X1)
		{
			minY = Y1;
			minX = X1;
		}
		else
		{
			minY = Y2;
			minX = X2;
		}
		while (A >= minX)
		{
			final = final + minY;
			A = A - minX;
		}
	}
	else
	{
		if (min * Y1 == X1)
		{
			minY = Y2;
			minX = X2;
		}
		else
		{
			minY = Y1;
			minX = X1;
		}
		while (A >= minX)
		{
			final = final + minY;
			A = A - minX;
		}
	}

	if (ceil(float(A) / float(X1) * float(Y1)) >= ceil(float(A) / float(X2) * float(Y2)))
		final = final + Y1 * (ceil(float(A) / float(X1)));
	else
		final = final + Y2 * (ceil(float(A) / float(X2)));

	cout << final;

	return 0;
}

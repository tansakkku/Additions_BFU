#include <iostream>
using namespace std;

int main()
{
	int final = 0;
	int Q1, P1, Q2, P2, A;
	cin >> Q1 >> P1 >> Q2 >> P2 >> A;
	float f1 = Q1 / P1;
	float f2 = Q2 / P2;
	float min = min(f1, f2);
	float minY;
	float minX;

	if (f1 < 1 and Coef2 < 1)
	{
		if (min * P1 == Q1)
		{
			minY = P1;
			minX = Q1;
		}
		else
		{
			minY = P2;
			minX = Q2;
		}
		while (A >= minX)
		{
			final = final + minY;
			A = A - minX;
		}
	}
	else
	{
		if (min * P1 == Q1)
		{
			minY = P2;
			minX = Q2;
		}
		else
		{
			minY = P1;
			minX = Q1;
		}
		while (A >= minX)
		{
			final = final + minY;
			A = A - minX;
		}
	}

	if (ceil(float(A) / float(Q1) * float(P1)) >= ceil(float(A) / float(Q2) * float(P2)))
		final = final + P1 * (ceil(float(A) / float(Q1)));
	else
		final = final + P2 * (ceil(float(A) / float(Q2)));

	cout << final;

	return 0;
}

﻿#include <iostream>
using namespace std;

int main()
{
	int Final = 0;
	int Q1, P1, Q2, P2, A;
	std::cin >> Q1 >> P1 >> Q2 >> P2 >> A;
	float f1 = Q1 / P1;
	float f2 = Q2 / P2;
	float Min_f = min(f1, f2);
	float Min_f_P;
	float Min_f_Q;

	if (f1 < 1 and f2 < 1)
	{
		if (Min_f * P1 == Q1)
		{
			Min_f_P = P1;
			Min_f_Q = Q1;
		}
		else
		{
			Min_f_P = P2;
			Min_f_Q = Q2;
		}
		while (A >= Min_f_Q)
		{
			Final = Final + Min_f_P;
			A = A - Min_f_Q;
		}
	}
	else
	{
		if (Min_f * P1 == Q1)
		{
			Min_f_P = P2;
			Min_f_Q = Q2;
		}
		else
		{
			Min_f_P = P1;
			Min_f_Q = Q1;
		}
		while (A >= Min_f_Q)
		{
			Final = Final + Min_f_P;
			A = A - MinCoefQ;
		}
	}


	int X1, X2;
	X1 = P1 * (ceil(float(A) / float(Q1)));
	X2 = P2 * (ceil(float(A) / float(Q2)));
	Final += min(X1, X2);

	cout << Final;

	return 0;
}

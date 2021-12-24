#pragma once
#include <iostream>

namespace hd{

	class Trap
	{
	public:

		Trap(float A, float B, float H);

		~Trap();

		float S();
		float P();

	private:
		float m_H;
		float m_A;
		float m_B;
	};
}

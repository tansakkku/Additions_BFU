#include <iostream>
#include "Header.hpp"

namespace hd{

	Trap::Trap(float A, float B, float H)
	{
		if (H <= 0)
		{
			std::cout << "H > 0" << std::endl;
			m_H = 1;
		}
		else
			m_H = H;

		if (A <= 0)
		{
			std::cout << "A > 0" << std::endl;
			m_A = 1;
		}
		else
			m_A = A;

		if (B <= 0)
		{
			std::cout << "B > 0" << std::endl;
			m_B = 1;
		}
		else
			m_B = B;
	}

	Trap::~Trap() {}

	float Trap::S() 
	{ 

		return ((m_H *(m_A + m_B))/2); 
	}
	float Trap::P() 
	{ 
		float bok;
		float bok_0;
		float aa = ((m_B - m_A)/2) * ((m_B - m_A) / 2);
		float hh = m_H * m_H;

		bok_0 = aa + hh;

		bok = sqrt(bok_0);

		
		return ((bok * 2) + m_A + m_B);
	
	}

}

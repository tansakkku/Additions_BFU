#include <iostream>
#include "Header.hpp"
namespace hd {

    long int Input()
    {

        std::cout << "Number: " << std::endl;
        std::cin >> num;
        if (num > pow(10, 9))
        {
            std::cout << "fail";
            return 1;;
        }

        return num;
    }

    int Max(int max, int a_0, int a_1, int a_2, int a_3, int a_4, int a_5, int a_6, int a_7, int a_8, int a_9, int sum)
    {

        while (num > 0)
        {
            sum += num % 10;

            if (num % 10 > max)
                max = num % 10;

            if (0 == num % 10)
                a_0++;
            if (1 == num % 10)
                a_1++;
            if (2 == num % 10)
                a_2++;
            if (3 == num % 10)
                a_3++;
            if (4 == num % 10)
                a_4++;
            if (5 == num % 10)
                a_5++;
            if (6 == num % 10)
                a_6++;
            if (7 == num % 10)
                a_7++;
            if (8 == num % 10)
                a_8++;
            if (9 == num % 10)
                a_9++;

            num = num / 10;
        }

        return max;
        return sum;
    }

    int Chastota(int a_0, int a_1, int a_2, int a_3, int a_4, int a_5, int a_6, int a_7, int a_8, int a_9, int chastota)
    {
        if (a_0 <= a_1)
        {
            a_0 = a_1;
            chastota = 1;
        }
        if (a_0 <= a_2)
        {
            a_0 = a_2;
            chastota = 2;
        }

        if (a_0 <= a_3)
        {
            a_0 = a_3;
            chastota = 3;
        }

        if (a_0 <= a_4)
        {
            a_0 = a_4;
            chastota = 4;
        }

        if (a_0 <= a_5)
        {
            a_0 = a_5;
            chastota = 5;
        }

        if (a_0 <= a_6)
        {
            a_0 = a_6;
            chastota = 6;
        }

        if (a_0 <= a_7)
        {
            a_0 = a_7;
            chastota = 7;
        }

        if (a_0 <= a_8)
        {
            a_0 = a_8;
            chastota = 8;
        }

        if (a_0 <= a_9)
        {
            a_0 = a_9;
            chastota = 9;
        }

        return chastota;

    }


}

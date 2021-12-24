/*
Вариант 4.
Дано натуральное число до 10^9. Определите максимальную цифру числа, 
самую часто встречающуюся цифру (если таких несколько, выведите наибольшую) 
и сумму цифр.
*/

#include <iostream>
#include "Header.hpp"

using namespace std;
using namespace hd;


int main()
{

    cout << "Number: " << endl;
    cin >> num;

  

    hd::Input();
    hd::Max(a_0, a_1, a_2, a_3, a_4, a_5, a_6, a_7, a_8, a_9, max, sum);
    hd::Chastota(a_0, a_1, a_2, a_3, a_4, a_5, a_6, a_7, a_8, a_9, chastota);

  


    cout << endl << "max number:  " << max << endl << "sum numbs:  " << sum << endl << "chastoe:   " << chastota << " - " << a_0 << " " << endl;
    return 0;
}


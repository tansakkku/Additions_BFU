#include <iostream>

using namespace std;

int main()
{
    const unsigned max_sum = 27;

    unsigned sum[max_sum + 1] = { 0 };

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            for (int x = 0; x < 10; ++x)
                ++sum[i + j + x];
   

    unsigned count = 0;
    for (int i = 1; i <= max_sum; ++i)
    {
        count += sum[i] * sum[i];
    }

    cout << count << endl;

    return 0;
}

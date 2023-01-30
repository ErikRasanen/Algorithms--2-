#include <stdio.h>

long power(int x, unsigned n)
{
    // initialize result by 1
    long pow = 1L;

    // multiply `x` exactly `n` times
    for (int i = 0; i < n; i++)
    {
        pow = pow * x;
    }

    return pow;
}

int main(void)
{
    int x = -2;
    unsigned n = 10;

    printf("pow(%d, %d) = %d", x, n, power(x, n));

    return 0;
}



#include <iostream>
#include <cmath>

using namespace std;

long long power(int x, unsigned int n)
{
    if (n == 0) return 1;
    if (n == 1) return x;
    long long tmp = power(x, n/2);
    if (n % 2 == 0)
        return tmp * tmp;
    else
        return x * tmp * tmp;
}

int main()
{
    int x = -2;
    unsigned int n = 10;

    cout << "pow(" << x << ", " << n << ") = " << pow(x, n) << endl;

    return 0;
}
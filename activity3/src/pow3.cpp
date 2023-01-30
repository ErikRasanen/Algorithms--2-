#include <iostream>

using namespace std;

long power(int x, unsigned n)
{
if (n == 0)
return 1;
else if (n == 1)
return x;
else
{
long pow = power(x, n / 2);
pow = pow * pow;
if (n % 2 == 0)
return pow;
else
return x * pow;
}
}

int main()
{
int x = -2;
unsigned n = 10;

cout << "pow(" << x << ", " << n << ") = " << power(x, n) << endl;

return 0;


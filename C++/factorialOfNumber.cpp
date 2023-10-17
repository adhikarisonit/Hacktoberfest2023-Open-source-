

// C++ program for factorial
// of a number
#include <iostream>
using namespace std;
 
// Function to find factorial of
// given number
unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}

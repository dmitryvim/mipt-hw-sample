#include <iostream>

int factorial(int n);

int main() {
    int n;
    std::cin >> n;
    std::cout << factorial(n);
}

int factorial(int n)
{
    int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
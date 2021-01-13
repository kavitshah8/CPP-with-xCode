#include "iostream"

struct Numbers
{
    int a;
    float b;
};

void logNumber(int a, int b)
{
    std::cout << "ints are = \n " << a << " AND " << b << std::endl;
}

void logNumber(float a, float b)
{
    std::cout << "Floats are = \n " << a << " AND " << b << std::endl;
}

void logNumber(Numbers a, Numbers b)
{
    std::cout << "Numbers are = \n " << a.a << " AND " << b.a << std::endl;
}

int main()
{

    Numbers num1 = {10};
    Numbers num2 = {10, 10.1};
    logNumber(num1.a, num1.a);
    return 0;
}
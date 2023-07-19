#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += i;
    }
    std::cout << "sum = " << sum << std::endl;
    return 0;
}

#include <iostream>

void PrintValue(const int &param)
{
    std::cout << "param = " << param << std::endl;
    // param = 10;
}
// void swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }
int main()
{
    int var = 5;
    // int var1 = 5;
    // int var2 = 10;

    PrintValue(var);
    std::cout << "var = " << var << std::endl;
    // swap(var1, var2);
    // std::cout << "var1 = " << var1 << std::endl;
    // std::cout << "var2 = " << var2 << std::endl;
    return 0;
}

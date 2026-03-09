#include <iostream>
//g++ test.cpp -o hello

int main()
{
    int a = 3;
    std::cout << "まず第一に、aは" << a << "である。"<< std::endl;
    switch (a + 1)
    {
        case 1:
            std::cout << "よって、a + 1 = 1" << std::endl;
             break;
        case 2:
            std::cout << "よって、a + 1 = 2" << std::endl;
            break;
        default:
            std::cout << "よって、a + 1 は1でも2でも3でも4ない" << std::endl;
            break;
        case 3:
            std::cout << "よって、a + 1 = 3" << std::endl;
            break;
        case 4:
            std::cout << "よって、a + 1 = 4" << std::endl;
            break;
    }
}

int absolute(int value)
{
    int abs = value < 0 ? -value : value;
    return abs;
}

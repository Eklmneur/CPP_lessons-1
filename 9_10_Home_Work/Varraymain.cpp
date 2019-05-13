#include "Varray.h"
#include <algorithm>
#include <iostream>

int main()
{
    Varray <int> A(5);
    std::cin >> A;
    std::cout << A;
    A.relength(10);
    A.NUM = 10;
    A[5] = 10;
    A[6] = 223;
    A[7] = 8282;
    A[8] = 8;
    A[9] = 93;
    std::cout << A;
    A.relength(7);
    std::cout << A << std::endl;
    std::reverse(A.begin(), A.end());
    std::cout << A << std::endl;
    std::sort(A.begin(), A.end());
    std::cout << A << std::endl;
    std::iter_swap(A.begin(), --A.end());
    std::cout << A << std::endl;
    return 0;
}

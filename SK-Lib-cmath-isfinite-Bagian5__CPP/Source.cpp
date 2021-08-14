#include <iostream>
#include <cmath>
#include <cfloat>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << std::boolalpha
        << "isfinite(NaN) = " << std::isfinite(NAN) << '\n'
        << "isfinite(Inf) = " << std::isfinite(INFINITY) << '\n'
        << "isfinite(0.0) = " << std::isfinite(0.0) << '\n'
        << "isfinite(exp(800)) = " << std::isfinite(std::exp(800)) << '\n'
        << "isfinite(DBL_MIN/2.0) = " << std::isfinite(DBL_MIN / 2.0) << '\n';

    _getch();
    return 0;
}
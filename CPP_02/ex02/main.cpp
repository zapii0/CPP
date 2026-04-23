#include "Fixed.hpp"
#include <iostream>


int main(void)
{
    std::cout << " INCREMENT/DECREMENT TESTS " << std::endl;
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "a:      " << a << std::endl;
    std::cout << "++a:    " << ++a << std::endl;
    std::cout << "a:      " << a << std::endl;
    std::cout << "a++:    " << a++ << std::endl;
    std::cout << "a:      " << a << std::endl;
    std::cout << "b:      " << b << std::endl;

    std::cout << "\n COMPARISON TESTS " << std::endl;
    Fixed c(10.5f);
    Fixed d(10.5f);
    Fixed e(20);

    std::cout << "c: " << c << " | d: " << d << " | e: " << e << std::endl;
    std::cout << "c > e  : " << (c > e) << std::endl;
    std::cout << "c < e  : " << (c < e) << std::endl;
    std::cout << "c == d : " << (c == d) << std::endl;
    std::cout << "c != e : " << (c != e) << std::endl;

    std::cout << "\n ARITHMETIC TESTS " << std::endl;
    Fixed f(2);
    Fixed g(4);

    std::cout << f << " + " << g << " = " << (f + g) << std::endl;
    std::cout << g << " - " << f << " = " << (g - f) << std::endl;
    std::cout << f << " * " << g << " = " << (f * g) << std::endl;
    std::cout << g << " / " << f << " = " << (g / f) << std::endl;

    std::cout << "\n MIN / MAX " << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "e: " << e << std::endl;
    std::cout << "max(c, e): " << Fixed::max(c, e) << std::endl;
    std::cout << "min(c, e): " << Fixed::min(c, e) << std::endl;

    Fixed const const_val1(42);
    Fixed const const_val2(21);
    std::cout << "max(const 42, const 21): " << Fixed::max(const_val1, const_val2) << std::endl;

    return 0;
}
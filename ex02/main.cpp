#include "Fixed.hpp"

int	main(void)
{
	std::string value;
	std::cout << "\033[0;34mPlease enter a value\033[m" << std::endl;
	while (42)
	{
		if (!std::getline(std::cin, value))
			exit (1);
		float val;
		val = atof(value.c_str());
		Fixed a(val);
		Fixed b(42);
		std::cout << "value of a : " << a << std::endl;
		std::cout << "pre incrementing a: " << ++a << std::endl;
		std::cout << "value of a : " << a << std::endl;
		std::cout << "post incrementing a: " << a++ << std::endl;
		std::cout << "value of a : " << a << std::endl;
		std::cout << "post decrementing a: " << a-- << std::endl;
		std::cout << "value of a : " << a << std::endl;
		std::cout << "pre decrementing a: " << --a << std::endl;
		std::cout << "value of a : " << a << std::endl;
		std::cout << "Now doing a comparaison between a and 42" << std::endl;
		std::cout << "max value : " << Fixed::max(a, b) << std::endl;
		std::cout << "min value : " << Fixed::min(a, b) << std::endl;

		/************** main sujet **************/
		std::cout << std::endl << "Testing with subject example" << std::endl; 
		Fixed d;
		Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << d << std::endl;
		std::cout << ++d << std::endl;
		std::cout << d << std::endl;
		std::cout << d++ << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << Fixed::max( d, e ) << std::endl;
		return (0);
	}
}

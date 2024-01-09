#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			_rawBits;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const float value);
		Fixed(const int value);
		Fixed(const Fixed &a);
		~Fixed();

		Fixed   &operator=( Fixed const & value );
		Fixed   operator+( Fixed const & value );
		Fixed   operator-( Fixed const & value );
		Fixed   operator*( Fixed const & value );
		Fixed   operator/( Fixed const & value );
		Fixed   &operator++( void) ; // post incrementation
		Fixed   operator++( int ); // pré incrementation
		Fixed   &operator--( void ); // post decrementation
		Fixed   operator--( int ); // pré decrementation

		
		bool	operator>( Fixed const &value );
		bool	operator<( Fixed const &value );
		bool	operator>=( Fixed const &value );
		bool	operator<=( Fixed const &value );
		bool	operator==( Fixed const &value );
		bool	operator!=( Fixed const &value );
		
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;
		static  Fixed const &max( Fixed const &a, Fixed const &b );
		static  Fixed &max( Fixed &a, Fixed &b );
		static  Fixed const &min( Fixed const &a, Fixed const &b );
		static  Fixed &min( Fixed &a, Fixed &b );

};

std::ostream & operator<<(std::ostream & o, Fixed const &value);
Fixed   const &max(Fixed const &a, Fixed const &b);
Fixed   &max(Fixed &a, Fixed &b);
Fixed   const &min(Fixed const &a, Fixed const &b);
Fixed   &min(Fixed &a, Fixed &b);
#endif
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const &value);
#endif
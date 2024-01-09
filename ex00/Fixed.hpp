#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		static const int	_bits = 8;
        int		        	_rawBits;
	public:
		Fixed();
		Fixed(const Fixed &a);
		~Fixed();
		Fixed & operator=( Fixed const &value );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
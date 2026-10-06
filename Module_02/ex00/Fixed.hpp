#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int _rawBits;
		static const int _fractionalBits = 8;
	public:
		Fixed(); 				  			//deafault constructor
		Fixed(const Fixed &copy); 			//copy constructor
		Fixed &operator=(const Fixed &copy); //copy assignment operator assignemnt
		~Fixed(); 							 //destructor
		
		int getRawBits(void) const;
		void setRawBits(const int value);
};

#endif
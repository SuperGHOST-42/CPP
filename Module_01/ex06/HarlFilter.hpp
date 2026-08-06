#ifndef HarlFilter_H
#define HarlFilter_H

#include <iostream>

class HarlFilter
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

#endif
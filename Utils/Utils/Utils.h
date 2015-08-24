#ifndef __UTILS_H__
#define __UTILS_H__

#include <boost/version.hpp>
#include <log4cxx/log4cxx.h>


class Utils
{
public:
	Utils();
	~Utils();

	/**
	 * @date:	2015/08/24
	 * @header:	#include <boost/version.hpp>
	 * @brief:	print version of boost lib
	 */
	void PrintBoostVersion();

	/**
	 * @date:	2015/08/24
	 * @header:	#include <log4cxx/log4cxx.h>
	 * @brief:	test log4cxx can be used
	 */
	void PrintLog4cxxVersion();

};


#endif // !__UTILS_H__




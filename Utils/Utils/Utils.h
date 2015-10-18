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

	/**
	* @brief:	print help message
	* @param:	program name
	* @return:
	*/
	void PrintUsage(const std::string &progname)
	{
		std::cout << "Usage:" << std::endl;
		std::cout << progname << " : ";
		std::cout << " --param1 <param1>  --param2 <param2>  --param3 <param3> " << std::endl;
		std::cout << "[here is the description of program]" << std::endl;
		std::cout << "--param1 : here is the description of param1" << std::endl;
		std::cout << "--param2 : here is the description of param2" << std::endl;
		std::cout << "--param3 : here is the description of param3" << std::endl;
		std::cout << "use example:" << std::endl;
		std::cout << progname << " --param1 egparam1 --param2 egparam2 --param3 egparam3 " << std::endl;
	}

	/**
	* @brief:	read param from cmd line
	* @param:
	* @return:
	*/
	int ReadParams(int argc, char *argv[], std::string &param1, std::string &param2, std::string &param3)
	{
		int i = 1;
		while (i < argc)
		{
			if (strcmp(argv[i], "--param1") == 0)
			{
				param1 = argv[i + 1];
			}
			else if (strcmp(argv[i], "--param2") == 0)
			{
				param2 = argv[i + 1];
			}
			else if (strcmp(argv[i], "--param3") == 0)
			{
				param3 = argv[i + 1];
			}
			i += 2;
		}

		return 0;
	}

};


#endif // !__UTILS_H__




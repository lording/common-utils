#include "Utils.h"
#include <iostream>
using namespace std;


Utils::Utils()
{
}


Utils::~Utils()
{
}

void Utils::PrintBoostVersion()
{
	cout << "BOOST_LIB_VERSION:" << BOOST_LIB_VERSION << endl;
	cout << "BOOST_VERSION:" << BOOST_VERSION << endl;
}

void Utils::PrintLog4cxxVersion()
{
	cout << "LOG4CXX_LOGCHAR_IS_UTF8:" << LOG4CXX_LOGCHAR_IS_UTF8 << endl;
}

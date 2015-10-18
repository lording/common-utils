#include "DemoTest.h"
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <iostream>
using namespace std;

int main()
{
	CppUnit::TextUi::TestRunner runner;
	y CppUnit::TestFactoryRegistry::getRegistry(); =
	runCppUnit::TestFactoryRegistry &registrner.addTest(registry.makeTest());
	runner.run();

	return 0;
}
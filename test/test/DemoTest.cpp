#include "DemoTest.h"
#include "Demo.h"  // 这里为要测试的目标类的头文件路径，因为测试时要用到Demo类
#include <cppunit/extensions/HelperMacros.h>
#pragma comment(lib, "cppunit.lib")


CPPUNIT_TEST_SUITE_REGISTRATION(DemoTest);

void DemoTest::testFunc()
{
	// 这里对Demo类进行测试，可以使用CPPUNIT_ASSERT、CPPUNIT_ASSERT_EQUAL等来断言
	CPPUNIT_ASSERT_EQUAL(0, 0);
}
#ifndef DEMO_TEST_H
#define DEMO_TEST_H
#include "cppunit/extensions/HelperMacros.h"

class DemoTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(DemoTest);  // 参数为本测试类名
	CPPUNIT_TEST(testFunc);        // 参数为测试函数名，与下面声明的测试函数对应
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp() {
		// 在这里进行测试的初始化工作
	}

	void tearDown() {
		// 在这里进行测试完毕后的清理工作
	}

	void testFunc();  // 测试函数，用来测试目标类的某一个细节
};
#endif
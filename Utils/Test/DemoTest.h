#ifndef DEMO_TEST_H
#define DEMO_TEST_H
#include "cppunit/extensions/HelperMacros.h"

class DemoTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(DemoTest);  // ����Ϊ����������
	CPPUNIT_TEST(testFunc);        // ����Ϊ���Ժ������������������Ĳ��Ժ�����Ӧ
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp() {
		// ��������в��Եĳ�ʼ������
	}

	void tearDown() {
		// ��������в�����Ϻ��������
	}

	void testFunc();  // ���Ժ�������������Ŀ�����ĳһ��ϸ��
};
#endif
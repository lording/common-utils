#include "DemoTest.h"
#include "Demo.h"  // ����ΪҪ���Ե�Ŀ�����ͷ�ļ�·������Ϊ����ʱҪ�õ�Demo��
#include <cppunit/extensions/HelperMacros.h>
#pragma comment(lib, "cppunit.lib")


CPPUNIT_TEST_SUITE_REGISTRATION(DemoTest);

void DemoTest::testFunc()
{
	// �����Demo����в��ԣ�����ʹ��CPPUNIT_ASSERT��CPPUNIT_ASSERT_EQUAL��������
	CPPUNIT_ASSERT_EQUAL(0, 0);
}
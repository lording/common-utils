#include <cppunit/TestCase.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TextOutputter.h>
#include <cppunit/TestCaller.h>
#include <iostream>
using namespace std;

class SimpleTest : public CppUnit::TestCase
{
public:
	void runTest() // ���ز��Է���
	{
		int i = 1;
		CPPUNIT_ASSERT_EQUAL(0, i);
	}
};

int main(int argc, char* argv[])
{
	CppUnit::TestResult r;
	CppUnit::TestResultCollector rc;
	r.addListener(&rc); // ׼���ý���ռ��� 

	SimpleTest t;
	t.run(&r); // ���в�������

	CppUnit::TextOutputter o(&rc, std::cout);
	o.write(); // ��������

	return 0;
}
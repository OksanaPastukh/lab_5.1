#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1/project5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const double a = 45;
			const double b = 0;
			c = h(a, b);
			Assert::AreEqual(c, 0.0);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const int N = 4;
			const int i = 2;
			c = S1(N,i);
			Assert::AreEqual(c, 1,2);

		}
	};
}

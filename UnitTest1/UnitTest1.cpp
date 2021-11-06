#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[5] = { 1,2,3,4,5 };
			 Sort(A, 5,0);
			Assert::AreEqual(A[1], 1);
		}
	};
}

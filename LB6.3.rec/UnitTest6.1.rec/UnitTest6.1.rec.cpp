#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.3.rec/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int count = 0;
			int t = countA(arr, 2, count, 0);
			Assert::AreEqual(count, 1);
		}
	};
}

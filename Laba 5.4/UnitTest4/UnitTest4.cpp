#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 5.4/Laba 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S0(2, 7);
			Assert::AreEqual(t, 2);
		}
	};
}

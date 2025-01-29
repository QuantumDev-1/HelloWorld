#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Bre\source\repos\HelloWorld\HelloWorld\HelloWorld.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FixedGroupProjectTravBre
{
	TEST_CLASS(HelloWorldTest)
	{
	public:
		
		TEST_METHOD(ShowMessage)
		{
			HelloWorld objectTest1, objectTest2,objectTest3;
			std::string test1, test2, test3;

			std::string Hello_ = "Hello World!";

			test1 = objectTest1.ShowMessage(Hello_);
			test2 = objectTest2.ShowMessage("Goodbye World!");
			test3 = objectTest3.ShowMessage(Hello_);

			Assert::AreEqual(test1, test2);
			Assert::AreEqual(test1, test3);
		}
	};
}

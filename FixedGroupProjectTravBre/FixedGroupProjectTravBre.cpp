#include "pch.h"
#include "CppUnitTest.h"
#include "..\HelloWorld\HelloWorld.h"
#include "..\HelloWorld\HelloWorld.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FixedGroupProjectTravBre
{
	TEST_CLASS(HelloWorldTest)
	{
	public:
		
		TEST_METHOD(ShowMessage)
		{
			HelloWorld objectTest1;
			std::string test1 = objectTest1.ShowMessage();

			std::string Hello_ = "Hello World!";

			Assert::AreEqual(test1, Hello_);
		}
	};
}

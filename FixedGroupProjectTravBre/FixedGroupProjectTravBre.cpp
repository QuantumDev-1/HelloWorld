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
			HelloWorld objectTest1, objectTest2;
			std::string test1, test2;

			std::string Hello_ = "Hello World!";
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "..\HelloWorld\HelloWorld.h""

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GroupProjectTravBre
{
	TEST_CLASS(HelloWorld)
	{
	public:
		
		TEST_METHOD(ShowMessage)
		{
			HelloWorld objectTest1, objectTest2;
			std::string test1, test2;

			std::string Hello_ = "Hello World!";

			objectTest1.ShowMessage(); //This is still taking from void ShowMessage?

		}
	};
}

#pragma once
#include <string>
class HelloWorld
{
	

public:
	std::string message;

	HelloWorld();
	HelloWorld(HelloWorld object, std::string text);

	void ShowMessage();
};


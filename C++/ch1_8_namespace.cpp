#include <iostream>

namespace NameSpace1
{
	void function();
}

namespace NameSpace2
{
	void function();
}

void NameSpace_main()
{
	NameSpace1::function();
	NameSpace2::function();
}

void NameSpace1::function()
{
	std::cout << "NameSpace1ÀÇ function" << std::endl;
}

void NameSpace2::function()
{
	std::cout << "NameSpace2ÀÇ function" << std::endl;
}
#include "Array.hpp"

int main()
{
	Array arr(5);
	for (unsigned int i = 0; i < arr.getSize(); ++i)
		arr[i] = i + 1;

	std::cout << "Array elements:" << std::endl;
	for (unsigned int i = 0; i < arr.getSize(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	try
	{
		// Accessing a valid index
		std::cout << "Accessing valid index:" << std::endl;
		std::cout << arr[2] << std::endl;

		// Accessing an out-of-range index
		std::cout << "Accessing out of range index:" << std::endl;
		std::cout << arr[10] << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
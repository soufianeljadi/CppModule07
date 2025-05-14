#include "iter.hpp"

void incrementInt(int &n) { n++; }
void incrementChar(char &c) { c++; }
void printInt(int &n) { std::cout << " | "<< n ; }
void printChar(char &c) { std::cout << " | "<< c ; }

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Int array before increment:" << std::endl;
	iter(arr, length, printInt);
	iter(arr, length, incrementInt);
	std::cout << "\n\nInt array after increment:" << std::endl;
	iter(arr, length, printInt);

	std::cout << "\n\n------------------------------\n\n";

	char arr2[] = {'a', 'b', 'c', 'd', 'e'};
	size_t length2 = sizeof(arr2) / sizeof(arr2[0]);

	std::cout << "Char array before increment:" << std::endl;
	iter(arr2, length2, printChar);
	iter(arr2, length2, incrementChar);
	std::cout << "\n\nChar array after increment:" << std::endl;
	iter(arr2, length2, printChar);
	std::cout << std::endl;

	return 0;
}
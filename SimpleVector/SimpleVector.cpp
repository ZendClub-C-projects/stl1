#include "pch.h"

void displayInfo(std::vector<int> v);
void displayVector(std::vector<int> v);

int main()
{
	// 1 -> Create vector:
	std::vector<int> v1(10);
	for (int i = 0; i < 12; i++)
		v1.push_back(10 * (i + 1));
	displayInfo(v1);
	displayVector(v1);
}

void displayInfo(std::vector<int> v)
{
	if (v.empty())
	{
		std::cout << "This is vector is empty!" << std::endl;
	}
	else
	{
		std::cout << "This is vector is not empty!" << std::endl;
	}
	std::cout << "Size of vector is - " << v.size() << " elements" << std::endl;
	std::cout << "MaxSize of vector is - " << v.max_size() << " elements" << std::endl;
	std::cout << "Capacity of vector is - " << v.capacity() << " elements" << std::endl;

}

void displayVector(std::vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

}

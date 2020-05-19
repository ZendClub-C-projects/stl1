#include "pch.h"

void displayInfo(std::vector<int> v);
void displayVector(std::vector<int> v);

int main()
{
	// 1 -> Create vector:
	std::vector<int> v1(5);
	v1.reserve(10);
	displayInfo(v1);
	displayVector(v1);

	for (int i = 0; i < 12; i++)
		v1.push_back(10 * (i + 1));
	displayInfo(v1);
	displayVector(v1);

	// 2 -> Access to element:
	std::cout << "\nFirst element: " << v1.front() << std::endl;
	std::cout << "6-th element: " << v1[5] << std::endl;
	std::cout << "Last element: " << v1.back() << std::endl;
	std::cout << "Pre-last element: " << v1[v1.size() - 2] << std::endl;
	// std::cout << "Next-last element: " << v1.at[v1.size()] << std::endl;
	v1.front() = 555;
	v1.back() = 777;
	try
	{
		std::cout << "\nFirst element: " << v1.at(0) << std::endl;
		std::cout << "6-th element: " << v1.at(5) << std::endl;
		std::cout << "Last element: " << v1.at(v1.size() - 1) << std::endl;
		std::cout << "Pre-last element: " << v1.at(v1.size() - 2) << std::endl;
		std::cout << "Next-last element: " << v1.at(v1.size()) << std::endl;
	}
	catch (const std::out_of_range &err)
	{
		std::cerr << "Out_of_range Exception: " << err.what() << std::endl;
	}

	// 3 -> Итераторы векторов:
	std::vector<int>::iterator iter;
	iter = v1.begin();
	std::cout << "\n1-st element: " << *iter << std::endl;
	iter = v1.end()-1;
	std::cout << "last element: " << *iter << std::endl;
	iter = v1.begin() + 5;
	std::cout << "+5 element: " << *iter << std::endl;
	for (iter = v1.begin(); iter != v1.end(); iter++)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	// 4 -> Методы-модификаторы:
	// insert
	v1.insert(v1.begin(), 333);
	displayInfo(v1);
	displayVector(v1);

	v1.insert(v1.end()-1, 999);
	displayInfo(v1);
	displayVector(v1);

	v1.insert(v1.begin() + 7, 444);
	displayInfo(v1);
	displayVector(v1);

	// erase
	v1.erase(v1.begin() + 6);
	v1.erase(v1.begin() + 7, v1.begin() + 12);
	displayInfo(v1);
	displayVector(v1);

	// resize
	v1.resize(v1.size() + 5);
	displayInfo(v1);
	displayVector(v1);

	v1.resize(v1.size() - 7);
	displayInfo(v1);
	displayVector(v1);


	v1.clear();
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

#pragma once
#include <iostream>

using namespace std;

template <class A>
class Person
{
	A* arr = nullptr;
	int size = 0;
public:
	int getSize();
	Person();
	~Person();
	void addElem(int pos, A elem);
	void show();
};

template<class A>
inline int Person<A>::getSize()
{
	return size;
}

template<class A>
inline Person<A>::Person() = default;

template<class A>
inline Person<A>::~Person()
{
	delete[] arr;
}

template<class A>
inline void Person<A>::addElem(int pos, A elem)
{
	A* temp = new A[size + 1];
	if (size != 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (i < pos)
			{
				temp[i] = arr[i];
			}
			else
			{
				temp[i + 1] = arr[i];
			}
		}
		delete[] arr;
		temp[pos] = elem;
		arr = temp;
		size++;
		delete[] temp;
	}
	else
	{
		temp[0] = elem;
		delete[] arr;
		arr = temp;
		size++;
		delete[] temp;
	}
}

template<class A>
inline void Person<A>::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

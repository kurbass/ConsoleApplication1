#pragma once

template <class A>
class Person
{
	A* arr = nullptr;
	int size = 0;
public:
	int getSize();
	Person();
	~Person();

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

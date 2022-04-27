#pragma once

template <class A>
class Person
{
	A* arr = nullptr;
	int size = 0;
public:
	int getSize();

};

template<class A>
inline int Person<A>::getSize()
{
	return size;
}
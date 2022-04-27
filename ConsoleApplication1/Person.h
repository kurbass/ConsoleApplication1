#pragma once

template <class A>
class Person
{
	A val;
public:
	A getVal();
	void setVal(A a);
};

template<class A>
inline A Person<A>::getVal()
{
	return val;
}

template<class A>
inline void Person<A>::setVal(A a)
{
	val = a;
}

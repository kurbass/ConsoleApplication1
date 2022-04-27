#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	Person<int> a;
	a.addElem(0, 1);
	a.show();
}
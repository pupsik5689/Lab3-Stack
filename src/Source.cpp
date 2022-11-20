#include "Stack.h"
#include <iostream>

int main()
{
	TStack<int> a(5);
	a.Push(1);
	a.Push(2);
	a.Push(3);
	a.Push(4);
	a.Push(5);

	for (int i = 0; i < 5; i++)
		std::cout << a.Pop();
}
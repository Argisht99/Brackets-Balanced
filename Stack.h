#pragma once
#include<iostream>
#include <assert.h>

template <class T>
class stack
{
public:
	stack<T>(int sz = 100)
	{
		base = new T[sz];
		size = sz;
		index_top = -1;
	}
	void push(T element)
	{
		if (index_top <= size - 1)
		{
			base[++index_top] = element;
		}
		else std::cout << "Stack overflow";
	}

	T& top()
	{
		return base[index_top];
	}

	void pop()
	{
		if (index_top >= 0)
		{
			index_top--;
		}
		else assert(false);
	}
	~stack()
	{
		delete[]base;
	}
	bool empty()
	{
		if (index_top == -1)
		{
			return true;
		}
		else
			return false;
	}
private:
	T* base;
	int size;
	int index_top;
};
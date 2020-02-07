#pragma once
#include "Stack.h"

bool balanced(std::string& arr)
{
	stack<char> obj;
	char symbol;

	for (int i = 0; i < arr.length(); ++i)
	{

		if (arr[i] == '(' || arr[i] == '{' || arr[i] == '[')
		{

			obj.push(arr[i]);
			continue;
		}

		if (obj.empty())
		{
			return false;
		}

		switch (arr[i])
		{

		case ')':
			symbol = obj.top();
			obj.pop();
			if (symbol == '{' || symbol == '[')
				return false;
			break;

		case ']':
			symbol = obj.top();
			obj.pop();
			if (symbol == '{' || symbol == '(')
				return false;
			break;

		case '}':
			symbol = obj.top();
			obj.pop();
			if (symbol == '[' || symbol == '(')
				return false;
			break;
		}
	}
	return (obj.empty());

}
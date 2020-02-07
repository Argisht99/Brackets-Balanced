 #include "Brackets.h"


int main()
{
	std::string arr = "()";

	if (balanced(arr))
		std::cout << "Balanced";
	else
		std::cout << "Not Balanced";
	return 0;
}

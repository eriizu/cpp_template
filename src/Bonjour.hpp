#include <iostream>

class Bonjour {
public:
	Bonjour()
	{
		std::cout << "Bonjour" << std::endl;
	}

	~Bonjour()
	{
		std::cout << "Au revoir" << std::endl;
	}
};

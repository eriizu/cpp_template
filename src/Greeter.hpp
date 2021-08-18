#include <iostream>
#include <string>

class Greeter {
public:
	Greeter(const std::string &name);

	~Greeter()
	{
		std::cout << "Goodbye " << _name << "!" << std::endl;
	}

private:
	std::string _name;
};

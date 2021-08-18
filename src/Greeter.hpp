#include <iostream>
#include <string>

class Greeter {
public:
	Greeter(const std::string &name) : _name{name}
	{
		std::cout << "Hello " << _name << "!" << std::endl;
	}

	~Greeter()
	{
		std::cout << "Goodbye " << _name << "!" << std::endl;
	}

private:
	std::string _name;
};

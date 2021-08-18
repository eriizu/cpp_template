
#include <Greeter.hpp>

Greeter::Greeter(const std::string &name) : _name{name}
{
	std::cout << "Hello " << _name << "!" << std::endl;
}

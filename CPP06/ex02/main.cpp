#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int nb = rand() % 3;
	if (nb == 0)
		return (new A);
	else if (nb == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	try {
		(void)dynamic_cast<A&>(*p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {
	}
	try {
		(void)dynamic_cast<B&>(*p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {
	}
	try {
		(void)dynamic_cast<C&>(*p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {
	}
}

int main()
{

	for (size_t i = 0; i < 10; i++)
	{
		Base *test = generate();
		identify(test);
		delete test;
	}
	return 0;
}

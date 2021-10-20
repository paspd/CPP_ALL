#include <iostream>

struct Data{};

uintptr_t serialize(Data* content)
{
	return reinterpret_cast<uintptr_t>(content);
}

Data* deserialize(uintptr_t content)
{
	return reinterpret_cast<Data*>(content);
}

int main()
{
	Data *data_test = deserialize(42);
	std::cout << data_test << std::endl;
	std::cout << std::endl;

	uintptr_t int_test = serialize(data_test);
	std::cout << int_test << std::endl;

	return 0;
}

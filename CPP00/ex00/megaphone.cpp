#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int i = 1;
	string str = argv[i++];
	while (argv[i])
		str.insert(str.length(), argv[i++]);
	transform(str.begin(), str.end(),str.begin(), ::toupper);
	cout << str.c_str() << endl;
	return 0;
}

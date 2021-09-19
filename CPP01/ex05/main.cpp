#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen karen;

	for (int i = 0; i < 10; i++)
	{
		karen.complain("DEBUG");
		karen.complain("INFO");
		karen.complain("WARNING");
		karen.complain("ERROR");
		karen.complain("BONJOUR");
		karen.complain("");
		karen.complain("WQAZSXEDCFRBNHBGVFCDXSSZEFHJKJYHTGRFEDCDVJIDHJGCVYFTZXCYATUYGXHBDN UCGYDFVCTUGIHBAGWFTDRCASXDTWFYGSUHXJODKPCLFVORGIJHUGYCTXFZCDXGYBUHJOX");
	}
	
	return 0;
}

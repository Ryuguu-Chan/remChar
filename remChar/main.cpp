#include <iostream>
#include <fstream>

// rudimentary stuff lol

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		std::ifstream input(argv[1]);

		if (!input.is_open())
		{
			std::cout << "couldn't open the file!";
			return 0;
		}

		// rudimentary stuff!
		while (!input.eof())
		{
			char c = input.get();
			if (c != '\n' && c != '\0') { std::cout << c; }
		}

		input.close();
	}
	return 0;
}
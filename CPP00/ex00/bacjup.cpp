#include "megaphone.hpp"

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; argv[i]; i++) {
		if (i != 1)
			std::cout << ' ' << std::flush;
		for (int j = 0; argv[i][j] != '\0'; j++) {
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout << (char)(argv[i][j] - 32) << std::flush;
			else
				std::cout << argv[i][j] << std::flush;
		}
	}
	std::cout << std::endl;
	return 1;
}

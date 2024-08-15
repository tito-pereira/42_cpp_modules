/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:54:14 by marvin            #+#    #+#             */
/*   Updated: 2024/08/14 15:54:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replacer.hpp"

bool	arg_check(char **argv) {
	std::ifstream	inFile(argv[1]);
	if (!inFile) {
		std::cerr << "Invalid file." << std::endl;
		return false;
	}
	inFile.close();

	if (!argv[2] || !argv[3]) {
		std::cerr << "Invalid arguments." << std::endl;
		return false;
	}
	
	return true;
}

char	*create_outfname(char *file) {
	int len = 0, i = -1;
	while (file[++i])
		len++;
	char	*outfile = new char[len + 9];
	
	for (int i = 0; file[i] != '\0'; i++)
		outfile[i] = file[i];
	
	std::string	repstr = ".replace";
	for (int i = 0; repstr[i] != '\0'; i++)
		outfile[len + i] = repstr[i];
	
	outfile[len + 8] = '\0';
	return outfile;
}

bool	lexer(std::string buffer, char *s1, int &i) {
	int	tmp_i = i, a = 0;
	while (buffer[tmp_i] == s1[a]) {
		tmp_i++;
		a++;
		if (s1[a] == '\0') {
			i = tmp_i - 1;
			return true;
		}
	}
	return false;
}

int	main(int argc, char **argv) {
	
	if (argc != 4) {
		std::cerr << "Invalid number of arguments." << std::endl;
		return EXIT_FAILURE;
	}
	else if (arg_check(argv) == false)
		return EXIT_FAILURE;
	
	std::string	line, buffer;
	std::ifstream	inFile(argv[1]);
	while (std::getline(inFile, line))
		buffer += line;
	inFile.close();
	
	char	*outname = create_outfname(argv[1]);
	std::ofstream outFile(outname);
	for (int i = 0; buffer[i] != '\0'; i++) {
		if (lexer(buffer, argv[2], i) == true)
			outFile << argv[3] << std::flush;
		else
			outFile << buffer[i] << std::flush;
	}
	outFile << std::endl;
	outFile.close();
	delete[] outname;
	return EXIT_SUCCESS;
}

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
	std::fstream inFile(argv[2]);
	if (!inFile)
		return false;
	inFile.close();
	if (!argv[3] || !argv[4])
		return false;
	return true;
}

char	*create_outfname(char *file) {
	int len = 0, i = -1;
	while (file[++i])
		len++;
	char	*outfile = new char[len];
	
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
			i = tmp_i;
			return true;
		}
	}
	return false;
}

// ajustar valores de index

int	main(int argc, char **argv) {
	
	if (argc != 4) {
		std::cerr << "Invalid number of arguments." << std::endl;
		return EXIT_FAILURE;
	}
	else if (arg_check(argv) == false) {
		std::cerr << "Invalid file or arguments." << std::endl;
		return EXIT_FAILURE;
	}
	
	std::string	buffer;
	std::ifstream inFile(argv[2]);
	inFile >> buffer;
	inFile.close();
	
	char	*outname = create_outfname(argv[2]); //create outfile name .replace
	std::ofstream outFile(outname);
	for (int i = 0; buffer[i] != '\0'; i++) {
		if (lexer(buffer, argv[3], i) == true)
			outFile << argv[4] << std::flush; //write / flush s2 into file.replace
		else
			outFile << buffer[i] << std::flush; //write / flush buffer[i] into file.replace
	}
	outFile << std::endl; //write // endl into file.replace
	outFile.close();
	delete[] outname;
	return EXIT_SUCCESS;
}

/*
V argc, argv
V read from file
V write to file (flush, end)
V open file
V create file (automatico com ofstream)

std::ifstream / ofstream / fstream <FD_Name>(”Name.txt”);
<FD_Name> << “write to location” << std::endl;
<FD_Name> >> buffer; (read from location)
std::getline(<FD_Name>, buffer)
<FD_Name>.seekg(0);
<FD_Name>.close();

- memory allocation?
- utilities inside std::string?
*/
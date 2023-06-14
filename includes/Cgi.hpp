#pragma once

#if defined(__APPLE__)
#include <sys/types.h>
#include <fcntl.h>
#endif
#if defined(__linux__)
#include <unistd.h>
#endif

#include <iostream>
#include <sstream>
#include <fstream>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "Colors.hpp"
#include <string.h>
#include <map>
#include <vector>

class Cgi
{
public:
	Cgi(std::string type, int request_id);
	~Cgi();

	std::string get_file_name();
	void run(std::map<std::string, std::string> request);
	void print_request(std::map<std::string, std::string> my_map);
	bool is_python3_installed();
	bool is_python_file(const std::string& str);

	class CgiException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("exception: CGI\n");
		}
	};

private:
	Cgi();
	Cgi &operator=(const Cgi &other);
	Cgi(const Cgi &other);

	std::vector <std::string> enviromentals;
	int color_index;
	std::string _type;
	int _cgi_pid;
	int _file_fd;
	std::string _file_name;
};
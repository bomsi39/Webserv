#include "../includes/Request.hpp"

int Request::nextId = 0;

Request::Request() : id(nextId++), initialResponseSent(false), file_fd(-1), client_fd(-1), requestdone(false)
{}

void	Request::CreateResponse(ServerConfig	conf)
{
	RequestProcessor tmp(request, conf);
	response = tmp;
}

bool Request::operator<(const Request& other)
{
	return id < other.id;
}

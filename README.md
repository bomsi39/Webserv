# Webserv

Welcome to the Webserv project! In this project, we delve into the world of HTTP (Hypertext Transfer Protocol) and build an HTTP server in C++98. The primary goal is to create a fully functional and non-blocking web server that adheres to the HTTP protocol and serves web content to clients.

## Table of Contents
- [Get Started](#get-started)
- [Introduction](#chapter-i-introduction)
- [General Rules](#chapter-ii-general-rules)
- [Mandatory Part](#chapter-iii-mandatory-part)

## Get Started

To use the `webserv` program, follow these steps:

1. **Compilation**: Open a terminal and navigate to the project directory containing the `Makefile`.

2. **Compile the Program**: Run `make` to compile the program. This generates the `webserv` executable.

3. **Run the Web Server**: Start the web server by running `./webserv [configuration_file]`, replacing `[configuration_file]` with the path to your configuration file.

4. **Example**: For instance, to use a configuration file named `my_config.conf` located in the `config_files` directory, run:
   ```sh
   ./webserv config_files/my_config.conf

## Chapter I Introduction

HTTP (Hypertext Transfer Protocol) is an application protocol that forms the foundation of data communication for the World Wide Web. It enables the distribution of hypermedia information systems, where users can access linked resources by clicking on hyperlinks. Our project aims to create an HTTP server that stores, processes, and delivers web content to clients, enabling seamless communication between clients and servers.

## Chapter II General Rules

In this chapter, we outline the general rules and guidelines for implementing the HTTP server:

- The program must be non-blocking and must not crash under any circumstances.
- A Makefile should be included, providing essential rules for compilation and execution.
- Compilation should be performed using `c++` with the flags `-Wall -Wextra -Werror`.
- The code must strictly adhere to the C++98 standard and compile with the `-std=c++98` flag.
- Whenever possible, use C++ features over C functions, but you can use C functions if needed.
- External libraries, including Boost, are forbidden.

## Chapter III Mandatory Part

### Requirements

- The program should take a configuration file as an argument or use a default path.
- The server must be non-blocking and never hang indefinitely.
- Only one `poll()` (or equivalent) should be used for all I/O operations, checking both read and write at the same time.
- All read and write operations must go through `poll()` (or equivalent).
- Error checking via `errno` after a read or write operation is forbidden.
- The server must be compatible with web browsers and HTTP 1.1 compliant.
- HTTP response status codes must be accurate.
- The server should have default error pages.
- Use of `fork` is restricted to CGI (Common Gateway Interface) execution.

### Configuration File

The configuration file allows you to:
- Choose the port and host for each server.
- Set up server names.
- Define default error pages.
- Limit client body size.
- Configure routes with accepted HTTP methods, redirections, directories, file roots, directory listing, default files, CGI execution, and file uploads.

### By dmf39 (alias dfranke) and Gotr-byte (pbiedermann)
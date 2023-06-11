# Get_next_line - Reading Lines from File Descriptor

The Get Next Line project was my second project an important step in my C programming journey. 
It involved creating a function, get_next_line(), that reads a line from a file descriptor, enabling efficient processing of text files line by line.

The function was designed to provide the following functionality:

  - Reading a file descriptor line by line
  - Returning each line read from the file
  - Gracefully handling end-of-file conditions and errors

The project helped me improve my knowledge of file I/O operations, memory management, and algorithm optimization, and I was able to enhance my ability to work with file descriptors, manipulate strings, and develop reliable and reusable code.
This project also laid the foundation for utilizing the get_next_line() function in subsequent projects, where reading and processing files efficiently was a key requirement.

## Usage 
  - Run `Make` to compile the library
  - The function prototype is `char *get_next_line(int fd)`, the return being a single line from the fd. 
  - On each subsequent call, the next like is returned until EOF. 

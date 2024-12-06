# **Get Next Line**

## **Features**

The **Get Next Line** function provides a robust utility for reading lines of text from a file descriptor. This tool is especially useful for parsing input from files or other stream-based sources in a C programming environment. Key highlights include:

- **Efficient Line Reading**: Reads one line at a time, including handling of newline characters.
- **Static Buffer Management**: Utilizes a static buffer to optimize performance and reduce memory allocation overhead.
- **Flexible Design**: Works with configurable buffer sizes through the `BUFFER_SIZE` macro.

## **Usage**

### **Compilation**

To include the Get Next Line functionality in your project, simply compile the source files along with your own code. You can customize the buffer size by defining the `BUFFER_SIZE` macro during compilation.

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c

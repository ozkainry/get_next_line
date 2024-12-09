# **Get Next Line**

## **Features**

The **Get Next Line** function provides a robust utility for reading lines of text from a file descriptor. This tool is especially useful for parsing input from files or other stream-based sources in a C programming environment. Key highlights include:

- **Efficient Line Reading**: Reads one line at a time, including handling of newline characters.
- **Static Buffer Management**: Utilizes a static buffer to optimize performance and reduce memory allocation overhead.
- **Flexible Design**: Works with configurable buffer sizes through the `BUFFER_SIZE` macro.

## **Usage**

### **Integration**

To use the **Get Next Line** function in your project, include the header file `get_next_line.h` in the source files where you want to call the function. This ensures the proper declaration of the function and its supporting utilities.

```c
#include "get_next_line.h"
```

### **Compilation**

Once integrated, compile the source files along with your own code. You can customize the buffer size by defining the `BUFFER_SIZE` macro during compilation.

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c
```

### **Key Macros**

`BUFFER_SIZE`: Controls the size of the static buffer. Default value is `10`, but it can be redefined during compilation.

### **Cleaning Up**

Ensure that you free the memory allocated for each line returned by `get_next_line` to avoid memory leaks. Static buffers are managed internally and do not require user intervention.

*This project has been created as part of the 42 curriculum by moel-ben.*

# Libft

## Description

Libft is a project from the 42 curriculum that consists of creating a personal C library containing a collection of useful functions.

The main objective is to understand how standard C library functions work by implementing them from scratch, while developing a deeper understanding of C programming.

This library includes:
- Reimplementations of standard C library functions.
- Additional string and memory manipulation functions.
- Linked list manipulation functions.

The resulting library, `libft.a`, can be reused in future 42 projects.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This generates the static library `libft.a`.

### Makefile Rules

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make all` | Compiles the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Rebuilds the library. |

### Usage

Include the header file in your C program:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

## Library Description

The library is divided into three mandatory parts.

### Part 1: Libc Functions

This part consists of recreating functions from the standard C library, using the `ft_` prefix.

**Character Checking**
- `ft_isalpha`: Checks whether a character is alphabetic.
- `ft_isdigit`: Checks whether a character is a digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a character belongs to the ASCII character set.
- `ft_isprint`: Checks whether a character is printable.

**String Functions**
- `ft_strlen`: Calculates the length of a string.
- `ft_strchr`: Finds the first occurrence of a character.
- `ft_strrchr`: Finds the last occurrence of a character.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_strlcpy`: Copies a string with a specified size limit.
- `ft_strlcat`: Concatenates strings with a specified size limit.
- `ft_strnstr`: Searches for a substring within a string.

**Memory Functions**
- `ft_memset`: Fills a memory area with a specified value.
- `ft_bzero`: Sets a memory area to zero.
- `ft_memcpy`: Copies memory from one location to another.
- `ft_memmove`: Copies memory while handling overlapping regions.
- `ft_memchr`: Searches for a character in a memory area.
- `ft_memcmp`: Compares two memory areas.

**Character Conversion**
- `ft_toupper`: Converts a lowercase letter to uppercase.
- `ft_tolower`: Converts an uppercase letter to lowercase.

**Conversion Functions**
- `ft_atoi`: Converts a string into an integer.
- `ft_calloc`: Allocates memory and initializes it to zero.
- `ft_strdup`: Creates a duplicate of a string.

### Part 2: Additional Functions

This part introduces additional functions for string manipulation, memory allocation, and file descriptor output.

- `ft_substr`: Extracts a substring from a given string.
- `ft_strjoin`: Concatenates two strings into a new string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings using a delimiter.
- `ft_itoa`: Converts an integer into a string.
- `ft_strmapi`: Applies a function to each character and creates a new string.
- `ft_striteri`: Applies a function to each character using its index.
- `ft_putchar_fd`: Outputs a character to a specified file descriptor.
- `ft_putstr_fd`: Outputs a string to a specified file descriptor.
- `ft_putendl_fd`: Outputs a string followed by a newline.
- `ft_putnbr_fd`: Outputs an integer to a specified file descriptor.

### Part 3: Linked Lists

This part introduces linked lists and dynamic data structures.

The library uses the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:
- `content`: A pointer to the data stored in the node.
- `next`: A pointer to the next node in the list.

**Linked List Functions**

- `ft_lstnew`: Creates a new node and initializes its content.
- `ft_lstadd_front`: Adds a node at the beginning of the list.
- `ft_lstsize`: Counts the number of nodes.
- `ft_lstlast`: Returns the last node of the list.
- `ft_lstadd_back`: Adds a node at the end of the list.
- `ft_lstdelone`: Deletes one node and frees its content.
- `ft_lstclear`: Deletes and frees an entire list.
- `ft_lstiter`: Applies a function to the content of every node.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.

## Resources

### Documentation and References

- 42 Libft Subject.
- Linux manual pages (`man`).
- C documentation: https://en.cppreference.com/w/c
- GNU C Library documentation: https://www.gnu.org/software/libc/manual/

### AI Usage

AI tools, including ChatGPT, were used as learning and development assistance throughout this project.

They helped with:
- Understanding C programming concepts, pointers, and memory allocation.
- Understanding the behavior and implementation of standard C functions.
- Debugging and reviewing function implementations.
- Understanding linked lists and their operations.
- Exploring test cases and identifying potential errors.

AI was used as a support tool for learning and problem-solving, while the project implementations were developed and tested as part of the learning process.

## Author

**moel-ben**

42 Student

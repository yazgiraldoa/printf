## _printf :page_facing_up: --> Holberton  Project

This project replicates the C standard library printf() function

## Dependencies :couple:

* The `_printf` function was coded on an Ubuntu 20.04 LTS machine with `gcc` version 9.3.0.

* Code must follow the Betty style https://github.com/holbertonschool/Betty.git

* The prototypes of all your functions should be included in your header file called "holberton.h"


## File
file            |   Description
--|--
holberton.h     | A file that contains a structure and the prototypes of the functions.
_putchar.c      | A function that calls write to print characters.
_printf.c       | A function that calls base structure and passes the arguments to print.
get_format.c    | A pointer function that evaluates the format in the structure and returns the function that matches.
special_cases.c | A function that evaluates edge cases related to "%".
print_basic.c   | A file containing the basic printing functions in %i, %d, %s, %c, %%, %u format.
print_advanced.c| A file containing the advanced printing functions in %r, %R, %x, %X formats.
print_pro.c     | A file containing the advanced printing functions in %o format.
Makefile        | A file containing the basic compilation commands.
man_3_printf    | A manual for printf function.

## Prototype  _printf
``` int _printf(const char *format, ...);```

## Examples `main.c`:
```
#include "holberton.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc *.c -o tester
```
Compilation Makefile:
```
$ make comp
```

Output:
```
$ ./tester
Hello, World!
$
```
### Examples with format
Here specific cases are evaluated with each of the formats.

#### d, i
The `int` argument is converted to signed decimal notation.

Example `main.c`:
```
int main(void)
{
    _printf("%d\n", 7);
}
```
Output:
```
7
```
#### o, u, x, X
The `unsigned int` argument is converted to unsigned octal (`o`), unsigned
decimal (`u`), or unsigned hexadecimal (`x` and `X`). The letters `abcdef` are
used for `x` conversions and the letters `ABCDEF` are used for `X` conversions.

Example `main.c`:
```
int main(void)
{
    _printf("%o\n", 77);
}
```
Output:
```
115
```
#### c
The `int` argument is converted to an `unsigned char`.

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```
#### s
The `const char *` argument is expected to be a pointer to a character array. Characters from the array are written starting from the first element of the array and ending.

Example `main.c`:
```
int main(void)
{
    _printf("%s\n", "Hello, World!");
}
```
Output:
```
Hello, World!
```
#### R

Identical to the `s` conversion specifier, except each character of the array
is converted to its corresponding character in ROT13 before being written.

Example `main.c`:
```
int main(void)
{
    _printf("%R\n", "Hello, World");
}
```
Output:
```
Uryyb, Jbeyq
```
#### %
A `%` is written. No argument is converted. The complete conversion
specification is `%%`.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```
### Flowchar
![](https://github.com/yazgiraldo/printf/blob/main/img/Flowchart.png)


## Return Value
Upon successful return, _printf returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns -1.


## Repositorio

[![Readme Card](https://github-readme-stats.vercel.app/api/pin/?username=yazgiraldoa&repo=printf)](https://github.com/yazgiraldoa/printf)

 <h2 align = 'center'>Authors</h2>
<h2 align = 'center' ><img src='https://raw.githubusercontent.com/ShahriarShafin/ShahriarShafin/main/Assets/handshake.gif' width="300px"> 

* **Juan Duque** - @Juan_Duque0 

<a href = 'https://www.twitter.com/@juan_duque0'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a> 
<a href = 'https://www.github.com/DKBARB10'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg"/></a> 

* **Yazmin Giraldo** - @yazgiraldoa 

<a href = 'https://www.twitter.com/@yazgiraldoa'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a> 
<a href = 'https://www.github.com/yazgiraldoa'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg"/></a> 
   
 <img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School logo">
  
   
</h2>

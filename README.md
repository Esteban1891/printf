<p1>0x11. C - printf</p1>

_printf is a custom execution of the C printf programming function. This project is a way to show how C programming is

Prototype: int _printf (const char *format, ...);

<p1>Requirements</p1>
<p3>General</p3>

    -Allowed editors: vi, vim, emacs
    -All your files will be compiled on Ubuntu 14.04 LTS
    -Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
    -All your files should end with a new line
    -A README.md file, at the root of the folder of the project is mandatory
    -Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    -You are not allowed to use global variables
    -No more than 5 functions per file
    -In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    -The prototypes of all your functions should be included in your header file called holberton.h
    -Don’t forget to push your header file
    -All your header files should be include guarded
    -Note that we will not provide the _putchar function for this project


<strong>File Descriptions</strong>

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life = Write a function that produces output according to a format.

    -Prototype: int _printf(const char *format, ...);
    -Returns: the number of characters printed (excluding the null byte used to end output to strings)
    -write output to stdout, the standard output stream
    -format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
        -c
        -s
        -%
    -You don’t have to reproduce the buffer handling of the C library printf function
    -You don’t have to handle the flag characters
    -You don’t have to handle field width
    -You don’t have to handle precision
    -You don’t have to handle the length modifiers


1. Education is when you read the fine print. Experience is what you get if you don't  = Handle the following conversion specifiers:

   -d
   -i
    -You don’t have to handle the flag characters
    -You don’t have to handle field width
    -You don’t have to handle precision
    -You don’t have to handle the length modifiers


2. Just because it's in print doesn't mean it's the gospel = Create a man page for your function.

Repo:

    GitHub repository: printf
    File: man_3_printf



3. With a face like mine, I do better in print = Handle the following custom conversion specifiers:

   - b: the unsigned int argument is converted to binary










<p1>Authors</p1>

Esteban De La Hoz | @Esteban18911

Eduardo Vega | @Eduardo63053974

#holberton-simple-shell
## Description

## Installation
 A- Clone repository
    git clone
    https://github.com/ruzu1988/holbertonschool-simple_shell.git

 B- Compile files
    > gcc -Wall -Werror -pedantic super_simple_shell.c execute.c -o super_simple_shell

 C- Run shell command
 > ./hsh

 D- Exit with the exit command
 > exit

## Libraries

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/wait.h>

## Use
The simple shell is a Unix command line interpreter.
It will interpret the first word as a command, and the following as the series of arguments.

### Examples
ls
```
$ ls
functions.c hsh main.h README.md shell.c
$
```
echo

    $echo Hello World!
    Hello World!
    $

$pwd
/home/.../holberton-simple_shell
$
```
### Some other commands that work
```
pwd
```

```
ls
```

```
less
```

```
file
```

```
cp
```

```
rm
```

```
mkdir
```

```
touch
```

```
clear
```

```
and more
### For futher help
For further help with the simple shell, and with wich commands it runs; install our man page and run it with:
```
man ./man_1_simple_shell
```
## Contributors
Edison Ortiz Jimenez (9492@holbertonstudents.com)
Zuleyka I. Rubio Santiago (9497@holbertonstudents.com)



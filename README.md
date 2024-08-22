#holberton-simple-shell

## Description

holberton-simple-shell is a Unix command-line interpreter that allows users to
execute commands in a minimalist shell environment. This project was developed
as part of the Holberton School curriculum, with the goal of understanding how
shells work internally and how processes are managed in Unix.

## Installation
 A- Clone repository
 Clone the repository to your local machine using the following command:
    git clone  https://github.com/ruzu1988/holbertonschool-simple_shell.git

 B- Compile files
 Compile the source files using 'gcc':
    > gcc -Wall -Werror -pedantic super_simple_shell.c execute.c -o super_simple_shell

 C- Run shell command
 Start the shell the following command:
 > ./hsh

 D- Exit with the exit command
 To the shell, use the 'exit' command:
 > exit

## Libraries
The project uses the following standard C libraries:

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/wait.h>

## Use
The simple shell is a Unix command-line interpreter. It interprets the first word as a command, and the following
 as a series of arguments.

### Examples
Here are some basic examples of how to use the shell:

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
/home/.../holberton-simple-shell
$
```
### Some other commands that work
The simple also supports the following commands:
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
For further help with the simple shell and the commands it supports,install our man
 page and run it with:

```
man ./man_1_simple_shell
```
## Contributors
Edison Ortiz Jimenez (9492@holbertonstudents.com)
Zuleyka I. Rubio Santiago (9497@holbertonstudents.com)



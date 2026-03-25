>Project Overview

Kernel Interface Utility Suite is a system-level project developed in C on Linux that re-implements major Linux commands using native system calls instead of GNU utilities.
The objective of this project is to understand how Linux commands work internally by directly interacting with the kernel using low-level system calls.

Each command is implemented as a separate executable and integrated into the system PATH using a postfix naming convention (x) to avoid conflict with default utilities.

>Example

ls → lsx

pwd → pwdx

cp → cpx

>Features

* Implementation of core Linux commands
  
* Uses native system calls instead of library functions
  
* Modular architecture (one command per file)
  
* Improved error handling
 
* Input validation
  
* Custom flags support
  
* System path integration
  
* Executable permission management

>Commands Implemented

pwdx – Print working directory

lsx – List directory contents

mkdirx – Create directory

rmx – Remove files / directories

cpx – Copy files

mvx – Move / rename files

catx – Display file contents

touchx – Create empty file

chmodx – Change file permissions

statx – Display file metadata

headx – Display first N lines

tailx – Display last N lines

wcx – Count words / lines / characters

>System Calls Used

open()

read()

write()

close()

stat()

lstat()

mkdir()

unlink()

rmdir()

chmod()

fork()

exec()

wait()

opendir()

readdir()

>Project Architecture

Each command is implemented in a separate source file.

Executables are generated for each command and stored in the bin directory.

Source files are stored in the src directory.

Demo files are used for testing file operations.

The project follows modular design where each command works independently.

>System Integration

All executables are compiled using gcc.

Executables are added to the system PATH variable.

Commands can be used directly from the terminal.

Postfix naming convention (x) is used to avoid conflict with default Linux commands.

>Learning Outcomes

Deep understanding of Linux system calls

File descriptor handling

Directory traversal using opendir and readdir

Understanding inode and file metadata

Process creation using fork and exec

User space to kernel space interaction

Understanding PATH variable and executable resolution

Hands-on experience with OS level programming

>Compilation

gcc Command_ls.c -o lsx

gcc Command_pwd.c -o pwdx

gcc Command_rm.c -o rmx

>Run Commands
./lsx
./pwdx
./rmx file.txt

>Author

Ankita

GitHub: https://github.com/theankita

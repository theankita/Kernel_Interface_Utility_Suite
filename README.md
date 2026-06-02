# Kernel Interface Utility Suite

## Overview

Kernel Interface Utility Suite is a system-level project developed in C on Linux that re-implements major Linux commands using native system calls instead of GNU utilities.

The objective of this project is to understand how Linux commands work internally by directly interacting with the kernel using low-level system calls.

Each command is implemented as a separate executable and integrated into the system PATH using a postfix naming convention (`x`) to avoid conflicts with default Linux utilities.

### Example

* ls → lsx
* pwd → pwdx
* cp → cpx

---

## Features

* Implementation of core Linux commands
* Uses native system calls instead of library functions
* Modular architecture (one command per file)
* Improved error handling
* Input validation
* Custom flags support
* System PATH integration
* Executable permission management

---

## Commands Implemented

| Command | Description                        |
| ------- | ---------------------------------- |
| pwdx    | Print working directory            |
| lsx     | List directory contents            |
| mkdirx  | Create directory                   |
| rmx     | Remove files/directories           |
| cpx     | Copy files                         |
| mvx     | Move/Rename files                  |
| catx    | Display file contents              |
| touchx  | Create empty file                  |
| chmodx  | Change file permissions            |
| statx   | Display file metadata              |
| headx   | Display first N lines              |
| tailx   | Display last N lines               |
| wcx     | Count words, lines, and characters |

---

## Technologies Used

### Programming Language

* C

### Operating System

* Linux

### Development Tools

* GCC Compiler
* Linux Terminal
* Makefile (if used)

### Core Concepts

* Linux System Calls
* Process Management
* File Handling
* Directory Traversal
* User Space & Kernel Space Interaction

---

## System Calls Used

* open()
* read()
* write()
* close()
* stat()
* lstat()
* mkdir()
* unlink()
* rmdir()
* chmod()
* fork()
* exec()
* wait()
* opendir()
* readdir()

---

## Project Structure

```text
Kernel_Interface_Utility_Suite/
│
├── src/
│   ├── Command_ls.c
│   ├── Command_pwd.c
│   ├── Command_rm.c
│   └── ...
│
├── bin/
│   ├── lsx
│   ├── pwdx
│   ├── rmx
│   └── ...
│
├── demo_files/
│
└── README.md
```

---

## Architecture

Each Linux command is implemented in a separate source file.

The source files are compiled independently to generate executable binaries.

Executables are stored in the `bin` directory and integrated into the system PATH.

The project follows a modular design where every command operates independently while sharing common Linux system call concepts.

---

## System Integration

* All executables are compiled using GCC.
* Executables are added to the system PATH variable.
* Commands can be executed directly from the terminal.
* Postfix naming convention (`x`) prevents conflicts with existing Linux utilities.

---

## Learning Outcomes

* Deep understanding of Linux system calls
* File descriptor handling
* Directory traversal using opendir() and readdir()
* Understanding inode structures and file metadata
* Process creation using fork() and exec()
* User space to kernel space interaction
* Understanding PATH variables and executable resolution
* Hands-on experience with operating system programming

---

## Compilation

```bash
gcc Command_ls.c -o lsx
gcc Command_pwd.c -o pwdx
gcc Command_rm.c -o rmx
```

---

## Run Commands

```bash
./lsx
./pwdx
./rmx file.txt
```

---

## Author

**Ankita Shinde**

GitHub: https://github.com/theankita

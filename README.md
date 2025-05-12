# Simple Shell

A custom Unix shell implementation written in C as part of the ALX Software Engineering Program.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Built-in Commands](#built-in-commands)
- [Authors](#authors)

## Overview

This Simple Shell project is a UNIX command line interpreter that replicates basic functionalities of the standard shell (sh). It provides an interface for users to interact with the operating system by executing commands. This project was developed as a milestone project for the ALX Software Engineering Program.

## Features

Our shell implementation supports the following features:

1. **Interactive Mode**: Displays a prompt (`hsh$`) and waits for user commands
2. **Non-interactive Mode**: Processes commands from standard input without displaying a prompt
3. **Command Execution**: Executes commands with arguments
4. **PATH Handling**: Searches for executables in the directories listed in the PATH environment variable
5. **Built-in Commands**: Supports built-in commands like `exit` and `env`
6. **Error Handling**: Provides appropriate error messages when commands aren't found
7. **EOF Handling**: Properly handles end-of-file condition (Ctrl+D)
8. **Memory Management**: Carefully manages memory allocation and deallocation

## Project Structure

The project is organized into several C files, each handling specific functionality:

- **main.c**: The entry point of the shell program
- **main.h**: Header file containing all function prototypes and necessary libraries
- **str_function.c**: Contains string manipulation functions
- **searchPath.c**: Handles PATH environment variable processing
- **env.c**: Functions for environment variable management
- **ex.c**: Functions for command execution
- **mem.c**: Memory management functions
- **checkEmptyFile.c**: Verifies if input is empty

## Implementation Details

The shell implements the following functionality as specified in the project requirements:

1. Simple command execution with a prompt
2. Command execution history retention
3. Basic command parsing without advanced features like pipes or redirections
4. Command search in PATH directories
5. Error handling for command not found
6. EOF (Ctrl+D) condition handling
7. Command line argument handling
8. Proper PATH handling without unnecessary fork calls
9. Built-in `exit` command implementation
10. Built-in `env` command for environment variable display
11. Custom implementations of standard library functions

## Installation

To compile and run this shell:

```bash
# Clone the repository
git clone [repository-url]

# Navigate to the project directory
cd simple_shell

# Compile the program
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell

# Run the shell
./shell
```

## Usage

After running the shell, you'll see a prompt where you can enter commands:

```bash
hsh$ ls
[files and directories will be listed here]
hsh$ pwd
/current/working/directory
hsh$ /bin/ls
[files and directories will be listed here]
hsh$ exit
```

## Built-in Commands

The shell supports the following built-in commands:

- **exit**: Exits the shell (optionally with a status code)
- **env**: Displays the current environment variables

## Authors

This project was created by:

- NIYOKWIZERWA Jean Paul Elisa (Ndevu) - [Email](mailto:jeanpaulelissa99@gmail.com)
- Jackline NYANGANJOKI - [Email](mailto:jacklinenyaganjoki@gmail.com)

Created as part of the ALX Software Engineering Program.

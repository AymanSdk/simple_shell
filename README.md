# Simple Shell Program in C

This is a simple shell program written in the C programming language. This shell program provides a basic command-line interface that allows users to execute system commands and interact with their operating system.

## Features

- **Command Execution**: You can execute system commands by entering them in the shell, just like you would in a regular terminal.

- **Basic Input/Output**: The shell supports basic input and output, allowing you to redirect input and output streams using `<` and `>`.

- **Piping**: You can pipe the output of one command as input to another using the `|` symbol.

- **Background Processes**: You can execute commands in the background by appending `&` to the end of the command.

- **cd Command**: You can change the current directory using the `cd` command.

- **Exit**: You can exit the shell by typing `exit` or pressing `Ctrl+D`.

## Getting Started

To compile and run this shell program, follow these steps:

1. **Clone the Repository**: Clone this repository to your local machine using Git:

   ```bash
   git clone <repository_url>
   ```

2. **Compile the Program**: Use a C compiler to compile the `shell.c` file:

   ```bash
   gcc -o shell shell.c
   ```

3. **Run the Shell**: Execute the compiled program:

   ```bash
   ./shell
   ```

4. **Start Using the Shell**: You will now be in the custom shell environment, where you can start entering commands.

## Usage

The shell supports basic command-line operations. Here are some examples of how to use it:

- **Running a Command**:
  ```
  $ ls
  ```

- **Input/Output Redirection**:
  ```
  $ ls > output.txt
  $ cat < input.txt
  ```

- **Piping**:
  ```
  $ ls | grep shell
  ```

- **Background Processes**:
  ```
  $ sleep 10 &
  ```

- **Changing Directory**:
  ```
  $ cd /path/to/directory
  ```

- **Exiting the Shell**:
  ```
  $ exit
  ```
apaaaaaaaaah

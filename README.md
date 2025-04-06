# File-Handling-Program

*COMPANY*: CODTECHIT SOLUTIONS

*NAME*: YASHVI BHALA

*INTERNID*: YASHVI38684

*DOMAIN*: C-LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

##REPORT ON FILE HANDLING IN C
1. Title of the Program
Basic File Handling in C

2. Objective
To demonstrate and implement fundamental file operations in the C programming language, including file creation, writing, reading, and appending data using standard I/O functions.

3. Tools & Technologies Used
Programming Language: C

Compiler: GCC (GNU Compiler Collection)

IDE/Code Editor: Visual Studio Code (VS Code)

Extensions used: C/C++ by Microsoft, Code Runner (optional)

Standard Libraries:

<stdio.h> – for input/output and file functions

<stdlib.h> – for utility functions and return status

4. Description of the Program
This C program, named file_handling.c, is a simple demonstration of how to perform basic file operations in C. It involves:

File Creation and Writing:

The user is prompted to enter a filename.

The program then accepts text input from the user and writes it to the specified file using fopen() in write mode "w" and fprintf().

File Reading:

After writing, the file is reopened in read mode "r" and the contents are displayed using fgetc() in a loop until EOF (End of File) is reached.

Appending Data:

The program then asks if the user wants to append more text.

If the user agrees, it takes additional text input and appends it to the file using "a" (append mode).

Final Display:

The updated contents of the file are displayed after the append operation.

Throughout the code, proper error handling using fopen() checks and perror() is included to detect if a file could not be opened or created.

5. Output Workflow
User inputs a file name.

User writes text to the file.

File content is displayed.

User chooses whether or not to append.

Final content of the file is shown.

6. Applications & Use Cases
Educational Use: Ideal for students learning file handling concepts in C.

Text Logging: Acts like a basic logging system where data is appended.

Simple File Editor: Can be extended into a lightweight command-line note editor.

Base for Larger Projects: Serves as the foundation for larger applications that require file management like text processors, configuration file parsers, or databases.

7. Advantages
Simple and beginner-friendly.

Demonstrates use of standard file operations in C.

Easily extendable into more advanced file handling systems.

Portable and platform-independent with standard C.

8. Conclusion
The file_handling.c program effectively illustrates how to use C for file operations such as creating, writing, reading, and appending data. It is a foundational exercise for anyone learning system-level programming and is essential for understanding how data is managed in files. Developed using Visual Studio Code with the GCC compiler, it showcases good programming practices like user input validation, file mode management, and error handling.


#OUTPUT: 

![Image](https://github.com/user-attachments/assets/d574662e-a6f5-40f0-a3d7-e3d2e18fc473)

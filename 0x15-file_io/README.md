## [C - File I/O](0x15-file_io) :file_folder:

## [Tests](./tests) Tests Folder



## [Main.h](./main.h) This Directory contains all the prototypes. 

| File                      | Prototype                                                            |
| ------------------------- | -------------------------------------------------------------------- |
|        |        |
|          |          |
|  |  |

## Tasks :page_with_curl:

* 
  * [0-read_textfile.c](./0-read_textfile.c): C function that reads a text file and
  prints it to the  standard output.
  * The parameter  is the number of letters the function should read and print.
  * If the file is  or cannot be opened or read - returns .
  * If the  call fails or does not write the expected number of bytes - returns .
  * Otherwise - returns the actual number of bytes the function can read and print.

* 
  * [1-create_file.c](./1-create_file.c): C function that creates a file.
  * The paramter  is the name of the file to create.
  * The parameter  is a null-terminated string to write to the file.
  * If  is , the function creates an empty file.
  * The created file has the permissions .
  * If the file already exists, the existing permissions are not changed.
  * Existing files are truncated.
  * If  is  or the funciton fails - returns .
  * Otherwise - returns  on success.

* 
  * [2-append_text_to_file.c](./2-append_text_to_file.c): C function that appends text at
  the end of a file.
  * The parameter  is the name of the file.
  * The parameter  is a null-terminated string to append to the file.
  * The function does not create the file if it does not exist.
  * If  is , nothing is added to the file.
  * If the function fails or  is  - returns .
  * If the file does not exist or the user lacks write permissions on the file - returns .
  * Otherwise - returns .

* 
  * [3-cp.c](./3-cp.c): C program that copies the contents of a file to another file.
  * Usage: 
  * If  already exists, it is truncated.
  * The created file has the permissions .
  * If the file already exists, the existing permissions are not changed.
  * If the number of arguments is incorrect, the function prints , followed by a new line on the  standard error and exits with code .
  * If  does not exist or the user lacks read permissions on it,
  the function prints , followed by a new
  line and exits with code .
    * Where  is the first argument passed to the program.
  * If files cannot be created or if  to  fails, the function prints
  , followed by a new line and exits with code .
    * Where  is the second argument passed to the program.
  * If the user cannot close a file descriptor, the function prints , followed by a new line on the  standard
  error and exits with code .
    * Where  is the value of the file descriptor.

* 
  * [100-elf_header.c](./100-elf_header.c): C program that displays the information contained
  in the  header at the start of an  file.
  * Usage 
  * Displayed information:
    * Magic
    * Class
    * Data
    * Version
    * OS/ABI
    * ABI Version
    * Type
    * Entry point address
  * Format is identical to  (version ).
  * If an error occurs or the file is not an  file, the function displays a
  corresponding error message to  and exits with a status value of .


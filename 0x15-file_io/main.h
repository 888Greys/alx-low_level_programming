#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
/**
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters read and printed, or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters);
/**
 * create_file - Creates a file and writes the given text content to it.
 * @filename: Name of the file to create.
 * @text_content: Null-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);
/**
 * append_text_to_file - Appends the given text content to a file.
 * @filename: Name of the file to append to.
 * @text_content: Null-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */


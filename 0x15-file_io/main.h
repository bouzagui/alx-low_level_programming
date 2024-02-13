#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *message, const char *arg, int exit_code);
void copy_file(const char *file_from, const char *file_to);

#endif

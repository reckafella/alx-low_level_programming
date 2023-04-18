#ifndef MAIN_H
#define MAIN_H

/* Included library header files */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <error.h>

/* Function prototypes */
int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Define BUffer size */
#ifndef BUFSIZE
#define BUFSIZE 1024
#endif


#endif /* MAIN_H */

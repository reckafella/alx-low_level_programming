#ifndef MAIN_H
#define MAIN_H

/* Included library header files */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <endian.h>

/* Function prototypes */
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
size_t _strlen(const char *s);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned long int count_set_bits(unsigned long int num);
int get_endianness(void);

#endif /* MAIN_H */

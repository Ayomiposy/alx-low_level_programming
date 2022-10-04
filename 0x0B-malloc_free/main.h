#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

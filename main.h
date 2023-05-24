#ifndef MAIN_H
#define MAIN_H
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;
char *get_command(char **argv, char *command_path);
char *get_location(char *command);
int num_token(char *str);
char *directory_path(char *path_token, int comman_length, char *command);
int get_line(char **str);
void free_2d(char **argv, int token_count);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *s);
char *_strcat(char *destination, char *source);
int execute(char **argv, int token_count);
void str_split(char *str, char *argv[], int token_count);

#endif

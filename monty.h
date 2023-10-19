#ifndef MAIN_H
#define MAIN_H
#define MAX_LINE_LENGTH 1024
#define MAX_LINES 1000

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <limits.h>
#include <stdarg.h>

/*extern stack_t *top;*/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **open_file(char *argv[]);
char **get_token(char *s, char *d);
char *_strdup(char *str);
void print_test(char **f);
int _include(stack_t **stack,char **s, int x);
stack_t *new_node(int x);
void push_s(stack_t **stack, unsigned int ln);
void pall(stack_t **stack, unsigned int ln);
void _free(int count, ...);

#endif


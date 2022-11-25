#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

#define UNUSED(x) (void)(x)

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - struct op
 * @fmt: The format
 * @fn: function associated
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 * @fmt: The Format
 * @fm_t: Fuction associated
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

#endif

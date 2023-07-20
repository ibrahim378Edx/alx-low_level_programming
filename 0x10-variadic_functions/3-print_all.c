#include <stdarg.h>
#include <stdio.h>

typedef struct {
    char c;
    int i;
    float f;
    char* s;
} argument;

void print_all(const char* const format, ...)
{
    const char* p = format;
    va_list args;
    argument arg;
    int printed = 0;

    va_start(args, format);

    while (*p != '\0')
    {
        switch (*p) {
            case 'c':
                arg.c = va_arg(args, int);
                printf("%s%c", printed ? ", " : "", arg.c);
                printed = 1;
                break;
            case 'i':
                arg.i = va_arg(args, int);
                printf("%s%d", printed ? ", " : "", arg.i);
                printed = 1;
                break;
            case 'f':
                arg.f = va_arg(args, double);
                printf("%s%f", printed ? ", " : "", arg.f);
                printed = 1;
                break;
            case 's':
                arg.s = va_arg(args, char*);
                printed = 1;
                printf("%s%s", printed && arg.s ? ", " : "", arg.s ? arg.s : "(nil)");
                break;
            default:
                break;
        }

        printed = (printed && (*p != 's')) ? 1 : printed;
        p++;
    }

    va_end(args);

    printf("\n");
}

#include <stdarg.h>
#include <stdio.h>

void print_all(const char* const format, ...)
{
    const char* p = format;
    va_list args;
    int i;
    char c;
    double f;
    char* s;

    va_start(args, format);

    while (*p)
    {
        if (*(p + 1) == '\0')
        {
            switch (*p)
            {
                case 'c':
                    c = (char) va_arg(args, int);
                    printf("%c", c);
                    break;

                case 'i':
                    i = va_arg(args, int);
                    printf("%d", i);
                    break;

                case 'f':
                    f = va_arg(args, double);
                    printf("%f", f);
                    break;

                case 's':
                    s = va_arg(args, char*);
                    if (s == NULL)
                    {
                        printf("(nil)");
                    }
                    else
                    {
                        printf("%s", s);
                    }
                    break;

                default:
                    break;
            }
        }
        else
        {
            switch (*p)
            {
                case 'c':
                    c = (char) va_arg(args, int);
                    printf("%c, ", c);
                    break;

                case 'i':
                    i = va_arg(args, int);
                    printf("%d, ", i);
                    break;

                case 'f':
                    f = va_arg(args, double);
                    printf("%f, ", f);
                    break;

                case 's':
                    s = va_arg(args, char*);
                    if (s == NULL)
                    {
                        printf("(nil), ");
                    }
                    else
                    {
                        printf("%s, ", s);
                    }
                    break;

                default:
                    break;
            }
        }

        p++;
    }

    va_end(args);
    printf("\n");
}

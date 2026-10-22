#include "vbc.h"

static int error = 0;
static int i = 0;

int sum (char *s);

int unexpected(char c)
{
    error = 1;
    if (c == '\0')
        printf("Unexpected end of input\n");
    else
        printf("Unexpected token '%c'\n", c);
    return (0);
}

int nbr(char *s)
{
    int a;

    if (isdigit((unsigned char)s[i]))
        return (s[i++] - '0');
    if (s[i] == '(')
    {
        i++;
        a = sum(s);
        if (error)
            return (0);
        if (s[i] != ')')
            return (unexpected(s[i]));
        i++;
        return (a);
    }
    return (unexpected(s[i]));
}

int product(char *s)
{
    int a = nbr(s);

    while (!error && s[i] == '*')
    {
        i++;
        a *= nbr(s);
    }
    return (a);
}

int sum (char *s)
{
    int a = product(s);

    while (!error && s[i] == '+')
    {
        i++;
        a += product(s);
    }
    return (a);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    int result = sum(argv[1]);
    if (error)
        return (1);
    if (argv[1][i] != '\0')
    {
        unexpected(argv[1][i]);
        return 1;
    }
    if (printf("%d\n", result) < 0)
        return 1;
    return (0);
}
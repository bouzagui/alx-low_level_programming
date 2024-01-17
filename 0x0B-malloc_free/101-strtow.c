#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_word - Count the number of words in a string
 * @s: Input string
 *
 * Return: Number of words
 */
int count_word(char *s)
{
    int a, b, num;

    a = 0;
    num = 0;

    for (b = 0; s[b]; b++)
    {
        if (s[b] == ' ')
        {
            a = 0;
        }
        else if (a == 0)
        {
            a = 1;
            num++;
        }
    }
    return (num);
}

/**
 * **strtow - Split a string into words
 * @str: Input string
 *
 * Return: Array of strings (words)
 */
char **strtow(char *str)
{
    char **go, *on;
    int i, k = 0, len = 0, words, c = 0, start;

    while (*(str + len))
        len++;
    words = count_word(str);
    if (words == 0)
        return (NULL);

    go = (char **)malloc(sizeof(char *) * (words + 1));
    if (go == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                on = (char *)malloc(sizeof(char) * (c + 1));
                if (on == NULL)
                    return (NULL);
                strncpy(on, str + start, c);
                on[c] = '\0';
                go[k] = on;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
            start = i;
    }
    go[k] = NULL;
    return (go);
}

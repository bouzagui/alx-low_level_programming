#include "main.h"

/**
 * jack_bauer - Function to be printed time.
 * 
 * Return: Nothing.
*/
void jack_bauer(void)
{
    int hours = 0, mins;

    while (hours < 24)
    {
        for (mins = 0; mins < 60; mins++)
        {
            _putchar((hours / 10) + '0');
            _putchar((hours % 10) + '0');
            _putchar(':');
            _putchar((mins / 10) + '0');
            _putchar((mins % 10) + '0');
            _putchar('\n');
        }
        hours++;
    }
}
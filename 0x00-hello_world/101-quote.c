#include <unistd.h>

/**
 * main - write "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by new line, to standard error
 * Returned: Always 1.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

#include "main.h"

/**
 * get_sigint - this handles the crtl + c call in prompt
 * @sig: the signal handler
 */

void get_sigint(int sig)

{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}

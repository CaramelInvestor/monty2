#include "monty.h"
/**
 * exitHandler - function to handle event after exit is passed
 * Return : returns NULL
 * Description: free space on exit
 */
void exitHandler(void)
{
	if (info.head2 != NULL)
		free_list(info.head2);
	if (close(info.fileDescriptor) == -1)
		return;
}

/**
 * main - entry point
 * @argc: arg no of argument
 * @argv: argv list of argument
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	info.head2 = NULL;
	info.err_no = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	info.mode = "stack";
	info.filename = argv[1];
	atexit(exitHandler);
	readlinedata(0, info.filename);
	free_list(info.head2);
	return (0);
}

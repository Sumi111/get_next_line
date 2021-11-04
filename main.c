#include "get_next_line.h"

int main()
{
	int fd1, fd2, fd3;

	fd1 = open("empty", O_RDONLY);
	fd2 = open("sumi.txt", O_RDONLY);
	fd3 = open("fath.txt", O_RDONLY);
	printf("%s", get_next_line(fd1));
	printf("\n%s", get_next_line(fd2));
	printf("\n%s", get_next_line(fd3));
	printf("\n%s", get_next_line(fd1));
	printf("\n%s", get_next_line(fd2));
	printf("\n%s", get_next_line(fd3));
}

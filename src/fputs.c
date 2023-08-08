#include <stdio.h>

int fputs(const char *s, FILE *f)
{
	printf("%s, reached dummy stub\n", __func__);
	return 0;
}

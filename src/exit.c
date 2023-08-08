#include <stdlib.h>
#include <stdio.h>

_Noreturn void exit(int status)
{
	printf("%s, reached dummy stub\n", __func__);
	for(;;);
}

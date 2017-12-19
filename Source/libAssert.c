#include <stdio.h>
#include <string.h>

#include "libAssert.h"

int32_t assert_success(int i1, int i2, char * msg)
{
	if(i1 != i2)
	{
		printf("ERROR: ");
		printf(msg);
		return ERROR;
	}
	return  SUCCESS;
}

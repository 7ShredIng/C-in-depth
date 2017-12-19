#include <string.h>
#include <stdio.h>

#include "libAssert.h"

int32_t assert_success(int i1, int i2, char * msg)
{
	if(i1 != i2)
	{
        if(strlen(msg) != 0)
        {
            printf(msg);
        }
		printf("ERROR: %d != %d\n", i1, i2);
		return ERROR;
	}
	return  SUCCESS;
}

#include <string.h>
#include <stdio.h>

#include "libAssert.h"

int32_t assert_success(int ret, char * msg)
{
    if(strlen(msg) != 0)
    {
        printf(msg);
    }
    
	if(ret < 0)
	{

		printf("ERROR: \n");
		return ERROR;
	}
	return  SUCCESS;
}

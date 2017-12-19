#include "types_examples.h"
#include "libAssert.h"

void runAllTypesExamples()
{
	char * msg;
    msg = "[types]";
	(void)assert_success(testVariableNames(), msg);
	(void)assert_success(testDataTypesAndSizes(), msg);
	(void)assert_success(testConstants(), msg);
}

int32_t testVariableNames()
{
	return ERROR;
}

int32_t testDataTypesAndSizes()
{
	return ERROR;
}


int32_t testConstants()
{
	return ERROR;
}



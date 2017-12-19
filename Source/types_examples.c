#include "types_examples.h"
#include "libAssert.h"

void runAllTypesExamples()
{
	char * msg;
	testVariableNames();
	testDataTypesAndSizes();
	testConstants();

	msg = "[Types] ";
	(void)assert_success(1, 0, msg);
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



#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "types_examples.h"

// --- Function Prototypes ---
int32_t menu();

/**
 * Main entry function.
 * @param[out] default return.
 */
int32_t main()
{
	int32_t choice = menu();
	// do something with selected menu
	runAllTypesExamples();	
	return 0;
}

/**
 * Display main menu.
 * @param[out] returns the selected option.
 */
int32_t menu()
{
	printf("[0] Types, Operators, Expressions\n");
	printf("[1] Control Flow\n");
	printf("[2] Functions\n");
	printf("[3] Pointers\n");
	printf("[4] Arrays\n");
	printf("---------------------------------\n");
	printf("[q] Quit\n");
	
	int32_t option;
	scanf("%d", &option, 1);
	return option;
}

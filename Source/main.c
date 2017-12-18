#include <stdint.h>
#include <stdio.h>

int32_t menu();

int32_t main()
{
	int32_t choice = menu();
	// do something with selected menu
	printf("%d", choice);
	return 0;
}

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

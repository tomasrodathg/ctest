#include "ctest.h"
#define MAX_BUFFER_SIZE 20

__attribute__((constructor(101)))
void setup(void) {
	if(!(__init_tester(20))) exit(1);
	printf("Initialized test runner...\n");
}

int main(void)
{
	char *test_report;
	printf("\n");
	while((test_report = __next_test_report())) printf("%s\n", test_report);
	__print_test_summary();
	__cleanup();
	return 0;
}

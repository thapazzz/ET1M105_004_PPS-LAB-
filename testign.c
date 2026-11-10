#include <assert.h>
#include <stdio.h>

/* Example function under test. Replace this with the function you need to test. */
static int add(int left, int right)
{
	return left + right;
}

static void test_add(void)
{
	assert(add(2, 3) == 5);
	assert(add(0, 0) == 0);
	assert(add(-4, 7) == 3);
}

int main(void)
{
	test_add();
	puts("All tests passed.");
	return 0;
}

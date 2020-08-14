#include "unity.h"
#include "simple_sort.h"
#include <stdlib.h>
#include <memory.h>

// Test Data
int test_arr_a[] = {52, 46, 2, 52, 8, 46, 23, 78, 31, 36, 17, 11};
int test_arr_a_r[] = {2, 8, 11, 17, 23, 31, 36, 46, 46, 52, 52, 78};
int *p_test_arr_a;
int test_arr_a_len;

/* Required by the unity test framework */
void setUp()
{
	test_arr_a_len = sizeof(test_arr_a);
	p_test_arr_a = malloc(test_arr_a_len);
	memcpy(p_test_arr_a, test_arr_a, test_arr_a_len);
}
/* Required by the unity test framework */
void tearDown()
{
	free(p_test_arr_a);
}

void test_simple_sort(void)
{
	simple_sort(p_test_arr_a, test_arr_a_len);
	TEST_ASSERT_EQUAL_INT32_ARRAY(test_arr_a_r, p_test_arr_a, test_arr_a_len);
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

/* Run Test functions */
	RUN_TEST(test_simple_sort);

	/* Close the Unity Test Framework */
	return UNITY_END();
}

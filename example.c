#include "ctest.h"

char *give_me_a_string(void)
{
	return "This string";
}

__TEST(test_strings, 
{
	char *expected = "This";

	assert_eq_str(expected, give_me_a_string());
}
)

__TEST(test_other_strings,
{
	assert_eq_str("this", give_me_a_string());
}
)

__TEST_MOD(example_mod, 2, test_strings, test_other_strings)

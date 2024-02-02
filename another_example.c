#include "ctest.h"

__TEST(test_more_strings,
{
			assert_eq_str("Failing again", "I think");
})

__TEST_MOD(another_example_mod, 1, test_more_strings)

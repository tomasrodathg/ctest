#include "ctest.h"

int max_number_of_ones(int *nums, int numsSize)
{
	int c, x, max;
	if(numsSize == 1) return nums[0] == 1;

	x = max = c = 0;
	while(numsSize >= 0) {
		x = nums[--numsSize];
		if(x == 1) goto count;
		if(x == 0) c = 0;
		continue;

count:
	c++;
	if(c > max) max = c;
	}

	return max;
}

__TEST(test_ones,  
		int nums[20] = ARRAY_WITH(0,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,1,1,0);

		int result = max_number_of_ones(nums, 20);

		assert_eq_int(6, result);
)

__TEST_MOD(count_ones, 1, test_ones)

#include "ctest.h"

int main(void)
{
	printf("This is the main function\n");
	return 0;
}

int max_number_of_ones(int *nums, int numsSize)
{
	int c = 0, x = 0, max = 0;
	if(numsSize == 1) return nums[0] == 1;
	while(numsSize > 0) (((x = nums[--numsSize]) == 1) ? ((++c >= numsSize && c >= max) ? (max = c) : NULL) : (c > max ? (max = c, c = 0): (c = 0)));
	return max;
}

__TEST(test_ones,  
		int nums[20] = ARRAY_WITH(0,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,1,1,0);

		int result = max_number_of_ones(nums, 20);

		assert_eq_int(6, result);
)

__TEST_MOD(count_ones, 1, test_ones)

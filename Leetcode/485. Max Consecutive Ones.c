int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i, combo, maximum=0;

    for(i=0, combo=0; i < numsSize; ++i)
    {
        if(nums[i])
		{
			++combo;
			if(maximum < combo)
				maximum=combo;
		}
		else	combo=0;
    }

	return maximum;
}

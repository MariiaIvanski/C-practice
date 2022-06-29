void twoSum(unsigned count, const int numbers[count], int target,
            unsigned *index1, unsigned *index2)
{
    // assign to the index1 and index2 pointers
    *index1 = *index2 = 0;

    unsigned i = 0;
    unsigned j = 0;

    for (j = 0; j < count; ++j)
    {
        for (i = j + 1; i < count; ++i)
        {
            if (numbers[i] + numbers[j] == target)
            {
                *index1 = i;
                *index2 = j;
            }
        }
    }
}
int merge (int *arr1, int *arr2, int length1, int length2)
{
    int i = 0, j = 0, k = 0;
    int length3 = length1 + length2;
    
    int *arr3 = malloc(length3 * sizeof(int));
    
    for(i = 0; i < length3; ++i)
    {
        if((arr1[j] >= arr2[k] && j < length1) || k >= length2)
        {
            arr3[i] = arr1[j];
            ++j;
        } 
        else
        {
            arr3[i] = arr2[k];
            ++k;
        }
    }
    
}

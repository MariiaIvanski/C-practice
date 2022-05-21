int copyArr(int *arr1, int *arr2, int n);

int main()
{
int arr1[4]= {15, 10, 12, 9};
int arr2[4];
int n = 4;

printf("the 2nd array is \n");
    copyArr(arr1, arr2, n);
}

int copyArr(int *arr1, int *arr2, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
        printf("arr[%d] : %d \n", i , arr2[i]);
    }

    
}
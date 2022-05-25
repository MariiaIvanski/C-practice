int printArray (int array[], int size);

int main(){
    int arr[] = {2, 5, 7, 9, 11};
    int size = 5;
    int arr2[6];
    int size2 = 6;

    int i, j = 8;

    for(i = 0; i < size; i++)
    {
        if (arr[i] <= j)
        {
            arr2[i] = arr[i];
        } else {
            arr2[i+1] = arr[i];
        }
    }

    for(i = 0; i<size2; i++)
    {
        if (arr2[i] != arr[i])
        {
            arr2[i] = j;
            break;
        }
    }

    printArray(arr, size);
    printArray(arr2, size2);

}

int printArray (int array[], int size){
int i;

printf("\n");

for(i=0; i<size; i++)
{
    printf("%d ",array[i]);
}
}
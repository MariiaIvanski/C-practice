
/*Write a program in C to swap elements using call by reference. */

int swapThree(int *ptr, int temp);
int printArr(int arr[]);

int main()
{
    int arr[] = {5, 6, 7};
    int *ptr;
    ptr = arr;

    int temp;
    temp = arr[2];

swapThree(arr, temp);

printArr(arr);

    

}

int swapThree(int *ptr, int temp)
{
    int i;
for (i=2; i>0; i--){
        ptr[i] = ptr[i-1];
    } 
    ptr[0] = temp;
}

int printArr(int arr[])
{
    int i;
    for(i = 0 ; i < 3; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
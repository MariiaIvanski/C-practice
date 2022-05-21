
int main()
{
    int length = 5;
    int arr[] = {1, 3, 5, 7, 9};

    int *ptr1;
    ptr1 = &arr;
    int i;

    for (i=0; i< length; i++)
    {
        printf("element [%d] : %d \n",i, *(ptr1 + i));
    }


}
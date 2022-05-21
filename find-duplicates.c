int doppelganger(int *arr, int n);

int main()
{

int n = 6;
int arr[6] = {5, 3, 3, 6, 9, 9};
doppelganger(arr, n);

return 0;
}


int doppelganger(int *arr, int n)
{
int i, j;
int sum = 0;


    for (i=0; i < n; i++)
    {
        for (j = (i+1); j < n; j++)
{
        if(arr[i]== arr[j])
        {
            sum++;
            break; //WHY?
        }
        
    }
}
printf("the total number of duplicate numbers is: %d \n", sum);
}
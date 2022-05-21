

void Reverse(int *arr, int n);

int main()
{    
    int arr[3] = {2, 4, 7};
    int n = 3 ; //length
    int i;
    
    printf("The values in the array are: \n");

      for(i = 0; i < n; i++)
            {                    
            printf(" %d,", arr[i]);
            }

    printf("\n The new array is: \n");

    Reverse(arr, n);
}


void Reverse(int *arr, int n)
    {
        int i, half, temp;
        half = n/2;
    
            for (i = 0; i < half; i++)
            {
                temp = arr[i];
                arr[i] = arr[n-i-1];
                arr[n-i-1]= temp;
            }

            for(i = 0; i < n; i++)
            {   
             printf(" %d,", arr[i]);
            }
    }




 

int uniqueNum( int *arr, int n);

int main()
{
    int n = 6;
    int arr[] = {0, 1, 2, 3, 3, 4};
    
    printf("the unique numbers are: ");
    uniqueNum(arr, n);
}

int uniqueNum(int *arr, int n)
{
    int i, j; 
    int arr2[6] = {1, 1, 1, 1, 1, 1};
    
    
 
        for (i=0; i < n; i++)
        {
              for(j = i+1; j<n; j++)
              {
                if(arr[i] == arr[j])
                {
                  arr2[i] = 0;
                  arr2[j] = 0;
                }
              }
              
        }
        
        for (i=0; i < n; i++)
        {
            if(arr2[i] == 1)
            {
                printf("%d ", arr[i]);                
            }
        }
    }
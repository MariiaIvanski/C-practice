int bubblesort(int arr[], int length);

int main(){
    int arr[] = {5, -3, 7, 9};
    int len = 4;

    bubblesort(arr, len);
    
}

int bubblesort(int arr[], int length){
    int i, j;
    for(i=0; i<length; i++)
    {
        for(j=0; j<(length-i-1); j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
               arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

     for(i=0; i<length; i++){
    printf("element %d : %d \n", i, arr[i]);    
    }

}
